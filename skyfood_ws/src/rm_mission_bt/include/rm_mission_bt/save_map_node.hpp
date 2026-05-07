#pragma once
#include <atomic>
#include <memory>
#include <string>
#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rm_interfaces/srv/save_map.hpp>

namespace rm_bt {

/**
 * BT action node — save the current occupancy map via /map_manager/save_map.
 *
 * Ports
 * -----
 *   map_name  [in]  Filename stem (e.g. "warehouse_v2")
 *   save_path [in]  Directory to write map files into
 */
class SaveMapNode : public BT::StatefulActionNode {
public:
  SaveMapNode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node);
  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

private:
  using Srv = rm_interfaces::srv::SaveMap;
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<Srv>::SharedPtr client_;
  struct SrvState {
    std::atomic<bool> done{false};
    bool success{false};
  };
  std::shared_ptr<SrvState> ss_;
};

} // namespace rm_bt
