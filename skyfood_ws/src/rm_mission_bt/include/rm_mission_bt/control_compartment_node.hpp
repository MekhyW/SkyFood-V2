#pragma once
#include <atomic>
#include <memory>
#include <string>
#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rm_interfaces/srv/control_compartment.hpp>

namespace rm_bt {

/**
 * BT action node — open or close a compartment door.
 *
 * Ports
 * -----
 *   door_id [in]  UL | UR | DL | DR | ALL
 *   open    [in]  true = open, false = close
 */
class ControlCompartmentNode : public BT::StatefulActionNode {
public:
  ControlCompartmentNode(const std::string &name, const BT::NodeConfig &config, rclcpp::Node::SharedPtr node);
  static BT::PortsList providedPorts();
  BT::NodeStatus onStart() override;
  BT::NodeStatus onRunning() override;
  void onHalted() override;

private:
  using Srv = rm_interfaces::srv::ControlCompartment;
  rclcpp::Node::SharedPtr node_;
  rclcpp::Client<Srv>::SharedPtr client_;
  struct SrvState {
    std::atomic<bool> done{false};
    bool success{false};
  };
  std::shared_ptr<SrvState> ss_;
};

} // namespace rm_bt
