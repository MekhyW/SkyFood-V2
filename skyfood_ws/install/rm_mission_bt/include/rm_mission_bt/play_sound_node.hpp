#pragma once
#include <atomic>
#include <memory>
#include <string>
#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rm_interfaces/srv/play_sound.hpp>

namespace rm_bt {

/**
 * BT action node — play an audio file via /sound_player/play.
 *
 * Ports
 * -----
 *   file_path [in]  Absolute path to WAV/MP3/OGG file
 *   blocking  [in]  true = wait for playback to finish (default: false)
 */
class PlaySoundNode : public BT::StatefulActionNode {
public:
  PlaySoundNode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node);
  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

private:
  using Srv = rm_interfaces::srv::PlaySound;
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<Srv>::SharedPtr client_;
  struct SrvState {
    std::atomic<bool> done{false};
    bool success{false};
  };
  std::shared_ptr<SrvState> ss_;
};

} // namespace rm_bt
