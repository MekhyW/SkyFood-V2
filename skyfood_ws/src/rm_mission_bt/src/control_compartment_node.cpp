// Copyright 2025 SkyFood Team – Apache-2.0
#include "rm_mission_bt/control_compartment_node.hpp"

namespace rm_bt
{

ControlCompartmentNode::ControlCompartmentNode(const std::string & name, const BT::NodeConfig & config, rclcpp::Node::SharedPtr node): BT::StatefulActionNode(name, config), node_(node)
{
  client_ = node_->create_client<Srv>("/compartment/control");
}

BT::PortsList ControlCompartmentNode::providedPorts()
{
  return {BT::InputPort<std::string>("door_id", "UL | UR | DL | DR | ALL"), BT::InputPort<bool>("open", "true = open, false = close")};
}

BT::NodeStatus ControlCompartmentNode::onStart()
{
  auto door_id = getInput<std::string>("door_id");
  auto open    = getInput<bool>("open");
  if (!door_id || !open) {
    RCLCPP_ERROR(node_->get_logger(), "[ControlCompartment] Missing required ports");
    return BT::NodeStatus::FAILURE;
  }
  if (!client_->wait_for_service(std::chrono::seconds(5))) {
    RCLCPP_ERROR(node_->get_logger(), "[ControlCompartment] /compartment/control not available");
    return BT::NodeStatus::FAILURE;
  }
  ss_ = std::make_shared<SrvState>();
  auto req      = std::make_shared<Srv::Request>();
  req->door_id  = door_id.value();
  req->open     = open.value();
  client_->async_send_request(req, [this](rclcpp::Client<Srv>::SharedFuture future) {
      auto resp    = future.get();
      ss_->success = resp->success;
      ss_->done    = true;
      RCLCPP_INFO(node_->get_logger(), "[ControlCompartment] %s", resp->message.c_str());
    });
  RCLCPP_INFO(node_->get_logger(), "[ControlCompartment] door=%s open=%s", door_id.value().c_str(), open.value() ? "true" : "false");
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus ControlCompartmentNode::onRunning()
{
  if (!ss_ || !ss_->done) return BT::NodeStatus::RUNNING;
  return ss_->success ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void ControlCompartmentNode::onHalted() { ss_.reset(); }

}  // namespace rm_bt
