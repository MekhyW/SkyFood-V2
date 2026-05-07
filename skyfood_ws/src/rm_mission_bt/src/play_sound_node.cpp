#include "rm_mission_bt/play_sound_node.hpp"

namespace rm_bt {

PlaySoundNode::PlaySoundNode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node): BT::StatefulActionNode(name, config), node_(node) {
  client_ = node_->create_client<Srv>("/sound_player/play");
}

BT::PortsList PlaySoundNode::providedPorts() {
  return {BT::InputPort<std::string>("file_path", "Absolute path to audio file"), BT::InputPort<bool>("blocking", "false", "Wait for playback to finish")};
}

BT::NodeStatus PlaySoundNode::onStart() {
  auto file_path = getInput<std::string>("file_path");
  if (!file_path) {
    RCLCPP_ERROR(node_->get_logger(), "[PlaySound] Missing port 'file_path'");
    return BT::NodeStatus::FAILURE;
  }
  if (!client_->wait_for_service(std::chrono::seconds(5))) {
    RCLCPP_ERROR(node_->get_logger(), "[PlaySound] /sound_player/play not available");
    return BT::NodeStatus::FAILURE;
  }
  ss_ = std::make_shared<SrvState>();
  auto req = std::make_shared<Srv::Request>();
  req->file_path = file_path.value();
  req->blocking = getInput<bool>("blocking").value_or(false);
  client_->async_send_request(req, [this](rclcpp::Client<Srv>::SharedFuture future) {
      auto resp = future.get();
      ss_->success = resp->success;
      ss_->done = true;
      RCLCPP_INFO(node_->get_logger(), "[PlaySound] %s", resp->message.c_str());
  });
  RCLCPP_INFO(node_->get_logger(), "[PlaySound] Playing '%s'", file_path.value().c_str());
  return BT::NodeStatus::RUNNING;
}

BT::NodeStatus PlaySoundNode::onRunning() {
  if (!ss_ || !ss_->done) return BT::NodeStatus::RUNNING;
  return ss_->success ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
}

void PlaySoundNode::onHalted() { ss_.reset(); }

} // namespace rm_bt
