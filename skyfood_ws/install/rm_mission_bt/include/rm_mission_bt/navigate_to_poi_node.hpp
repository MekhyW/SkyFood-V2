#pragma once
#include <atomic>
#include <memory>
#include <string>
#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rclcpp_action/rclcpp_action.hpp>
#include <rm_interfaces/action/navigate_to_poi.hpp>

namespace rm_bt {

/**
 * BT action node — navigate to a named POI.
 *
 * Ports
 * -----
 *   poi_name [in]  Name registered via /poi_manager/save_poi
 *
 * Status
 * ------
 *   RUNNING  → goal in-flight
 *   SUCCESS  → robot arrived
 *   FAILURE  → unknown POI / server unavailable / Nav2 rejected
 */
class NavigateToPOINode : public BT::StatefulActionNode {
public:
  using NavAction = rm_interfaces::action::NavigateToPOI;
  using GoalHandle = rclcpp_action::ClientGoalHandle<NavAction>;
  NavigateToPOINode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node);
  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

private:
  rclcpp::Node::SharedPtr node_;
  rclcpp_action::Client<NavAction>::SharedPtr client_;
  struct GoalState {
    std::atomic<bool> accepted{false};
    std::atomic<bool> rejected{false};
    std::atomic<bool> result_ready{false};
    bool success{false};
    GoalHandle::SharedPtr handle;
  };
  std::shared_ptr<GoalState> gs_;
};

} // namespace rm_bt
