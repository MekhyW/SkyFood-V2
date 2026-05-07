#include "rm_mission_bt/navigate_to_poi_node.hpp"

namespace rm_bt {

NavigateToPOINode::NavigateToPOINode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node): BT::StatefulActionNode(name, config), node_(node) {
  client_ = rclcpp_action::create_client<NavAction>(node_, "/poi_manager/navigate_to_poi");
}

BT::PortsList NavigateToPOINode::providedPorts() {
  return {BT::InputPort<std::string>("poi_name", "Name of the target POI")};
}

BT::NodeStatus NavigateToPOINode::onStart() {
  auto poi_name = getInput<std::string>("poi_name");
  if (!poi_name) {
    RCLCPP_ERROR(node_->get_logger(), "[NavigateToPOI] Missing port 'poi_name'");
    return BT::NodeStatus::FAILURE;
  }
  if (!client_->wait_for_action_server(std::chrono::seconds(5))) {
    RCLCPP_ERROR(node_->get_logger(), "[NavigateToPOI] Action server not available");
    return BT::NodeStatus::FAILURE;
  }
  gs_ = std::make_shared<GoalState>();
  NavAction::Goal goal;
  goal.poi_name = poi_name.value();
  auto opts = rclcpp_action::Client<NavAction>::SendGoalOptions();
  opts.goal_response_callback = [this](const GoalHandle::SharedPtr &handle) {
    if (!handle) {
      RCLCPP_WARN(node_->get_logger(), "[NavigateToPOI] Goal rejected");
      gs_->rejected = true;
    } else {
      gs_->handle = handle;
      gs_->accepted = true;
      RCLCPP_INFO(node_->get_logger(), "[NavigateToPOI] Goal accepted");
    }
  };
  opts.result_callback = [this](const GoalHandle::WrappedResult &wr) {
    gs_->success = wr.result->success;
    gs_->result_ready = true;
    RCLCPP_INFO(node_->get_logger(), "[NavigateToPOI] %s", wr.result->message.c_str());
  };
  client_->async_send_goal(goal, opts);
  RCLCPP_INFO(node_->get_logger(), "[NavigateToPOI] Sent goal → '%s'", poi_name.value().c_str());
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus NavigateToPOINode::onRunning() {
  if (!gs_)
    return BT::NodeStatus::FAILURE;
  if (gs_->rejected)
    return BT::NodeStatus::FAILURE;
  if (!gs_->accepted)
    return BT::NodeStatus::RUNNING; // awaiting acceptance
  if (!gs_->result_ready)
    return BT::NodeStatus::RUNNING; // navigating
  return gs_->success ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void NavigateToPOINode::onHalted() {
  if (gs_ && gs_->accepted && gs_->handle) {
    client_->async_cancel_goal(gs_->handle);
    RCLCPP_INFO(node_->get_logger(), "[NavigateToPOI] Goal cancelled (tree halted)");
  }
  gs_.reset();
}

} // namespace rm_bt
