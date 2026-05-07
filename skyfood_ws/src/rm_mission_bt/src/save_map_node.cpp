#include "rm_mission_bt/save_map_node.hpp"

namespace rm_bt {

SaveMapNode::SaveMapNode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node): BT::StatefulActionNode(name, config), node_(node) {
  client_ = node_->create_client<Srv>("/map_manager/save_map");
}

BT::PortsList SaveMapNode::providedPorts() {
  return {BT::InputPort<std::string>("map_name", "Filename stem for the saved map"), BT::InputPort<std::string>("save_path", "Directory to write map files into")};
}

BT::NodeStatus SaveMapNode::onStart() {
  auto map_name = getInput<std::string>("map_name");
  auto save_path = getInput<std::string>("save_path");
  if (!map_name || !save_path) {
    RCLCPP_ERROR(node_->get_logger(), "[SaveMap] Missing required ports");
    return BT::NodeStatus::FAILURE;
  }
  if (!client_->wait_for_service(std::chrono::seconds(5))) {
    RCLCPP_ERROR(node_->get_logger(), "[SaveMap] /map_manager/save_map not available");
    return BT::NodeStatus::FAILURE;
  }
  ss_ = std::make_shared<SrvState>();
  auto req = std::make_shared<Srv::Request>();
  req->map_name = map_name.value();
  req->save_path = save_path.value();
  client_->async_send_request(req, [this](rclcpp::Client<Srv>::SharedFuture future) {
    auto resp = future.get();
    ss_->success = resp->success;
    ss_->done = true;
    RCLCPP_INFO(node_->get_logger(), "[SaveMap] %s", resp->message.c_str());
  });
  RCLCPP_INFO(node_->get_logger(), "[SaveMap] Saving map '%s' → %s", map_name.value().c_str(), save_path.value().c_str());
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus SaveMapNode::onRunning() {
  if (!ss_ || !ss_->done) return BT::NodeStatus::RUNNING;
  return ss_->success ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void SaveMapNode::onHalted() { ss_.reset(); }

} // namespace rm_bt
