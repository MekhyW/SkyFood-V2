// mission_runner.cpp
// ==================
// ROS2 node that loads a BehaviorTree.CPP v4 XML tree, registers the
// SkyFood custom BT nodes, ticks the tree at a configurable rate and
// streams live state to Groot2 for monitoring.
//
// Parameters
// ----------
//   bt_xml      (string)  – Path to the XML file to execute.
//                           Default: <pkg_share>/bt_xml/delivery_mission.xml
//   groot2_port (int)     – ZMQ port for Groot2 live monitor (default 1667).
//   tick_hz     (double)  – Tick frequency in Hz (default 10.0).

#include "rm_mission_bt/control_compartment_node.hpp"
#include "rm_mission_bt/navigate_to_poi_node.hpp"
#include "rm_mission_bt/play_sound_node.hpp"
#include "rm_mission_bt/save_map_node.hpp"
#include <ament_index_cpp/get_package_share_directory.hpp>
#include <behaviortree_cpp/bt_factory.h>
#include <behaviortree_cpp/loggers/groot2_publisher.h>
#include <chrono>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <string>

using namespace std::chrono_literals;

class MissionRunner : public rclcpp::Node {
  public:
    MissionRunner() : rclcpp::Node("mission_runner") {
      // ── Parameters ────────────────────────────────────────────────────
      const std::string default_xml = ament_index_cpp::get_package_share_directory("rm_mission_bt") + "/bt_xml/delivery_mission.xml";
      declare_parameter("bt_xml", default_xml);
      declare_parameter("groot2_port", 1667);
      declare_parameter("tick_hz", 10.0);
      const std::string xml_path = get_parameter("bt_xml").as_string();
      const int groot2_port = get_parameter("groot2_port").as_int();
      const double tick_hz = get_parameter("tick_hz").as_double();

      // ── Register custom BT nodes ───────────────────────────────────────
      // Each node receives a shared_ptr to *this* node so it can create
      // ROS2 clients and log via get_logger().
      auto node_ptr = shared_from_this();

      factory_.registerNodeType<rm_bt::NavigateToPOINode>("NavigateToPOI", node_ptr);
      factory_.registerNodeType<rm_bt::PlaySoundNode>("PlaySound", node_ptr);
      factory_.registerNodeType<rm_bt::SaveMapNode>("SaveMap", node_ptr);
      factory_.registerNodeType<rm_bt::ControlCompartmentNode>("ControlCompartment", node_ptr);

      // ── Load tree from XML ─────────────────────────────────────────────
      RCLCPP_INFO(get_logger(), "Loading BT from: %s", xml_path.c_str());
      tree_ = factory_.createTreeFromFile(xml_path);

      // ── Groot2 live-monitor publisher ──────────────────────────────────
      // Connect Groot2 → Server address: localhost:<groot2_port>
      groot2_pub_ = std::make_unique<BT::Groot2Publisher>(tree_, groot2_port);
      RCLCPP_INFO(get_logger(), "Groot2 publisher active on port %d", groot2_port);

      // ── Tick timer ────────────────────────────────────────────────────
      const auto period = std::chrono::duration<double>(1.0 / tick_hz);
      tick_timer_ = create_wall_timer(period, std::bind(&MissionRunner::tick, this));

      RCLCPP_INFO(get_logger(), "Mission runner started (%.1f Hz)", tick_hz);
    }

  private:
    void tick() {
      const auto status = tree_.tickOnce();
      if (status == BT::NodeStatus::SUCCESS) {
        RCLCPP_INFO(get_logger(), "✓ Mission complete — tree returned SUCCESS");
        tick_timer_->cancel();
      } else if (status == BT::NodeStatus::FAILURE) {
        RCLCPP_ERROR(get_logger(), "✗ Mission failed — tree returned FAILURE");
        tick_timer_->cancel();
      }
    }
    BT::BehaviorTreeFactory factory_;
    BT::Tree tree_;
    std::unique_ptr<BT::Groot2Publisher> groot2_pub_;
    rclcpp::TimerBase::SharedPtr tick_timer_;
};

int main(int argc, char **argv) {
  rclcpp::init(argc, argv);
  auto executor = std::make_shared<rclcpp::executors::MultiThreadedExecutor>(); // MultiThreadedExecutor allows the BT tick timer and the ROS2
  auto node = std::make_shared<MissionRunner>();
  executor->add_node(node);
  try {
    executor->spin();
  } catch (const std::exception &e) {
    RCLCPP_ERROR(node->get_logger(), "Exception: %s", e.what());
  }
  rclcpp::shutdown();
  return 0;
}
