"""
compartment_manager.py
======================
ROS2 node that manages the robot's compartment doors.
Currently a dummy implementation that simulates opening and closing doors.

Exposes:
  /compartment/control (rm_interfaces/srv/ControlCompartment)
      Opens or closes specific doors (UL, UR, DL, DR) or ALL of them.
  /compartment/status (rm_interfaces/msg/CompartmentStatus)
      Publishes the current state of all doors at 1Hz.

Usage:
  ros2 run rm_behaviors compartment_manager
"""

import rclpy
from rclpy.node import Node
from rm_interfaces.srv import ControlCompartment
from rm_interfaces.msg import CompartmentStatus

class CompartmentManager(Node):
    def __init__(self):
        super().__init__('compartment_manager')
        self.doors = {
            "UL": False, # False = closed, True = open
            "UR": False,
            "DL": False,
            "DR": False
        }
        self.srv = self.create_service(ControlCompartment, '/compartment/control', self.handle_control)
        self.publisher = self.create_publisher(CompartmentStatus, '/compartment/status', 10)
        self.timer = self.create_timer(1.0, self.publish_status)
        self.get_logger().info('Compartment Manager (Dummy) ready.')

    def handle_control(self, request, response):
        door_id = request.door_id.upper()
        action = "opening" if request.open else "closing"
        self.get_logger().info(f'Received request: {action} door {door_id}')
        if door_id == "ALL":
            for d in self.doors:
                self.doors[d] = request.open
            response.success = True
            response.message = f"All doors {action} successfully (simulated)."
        elif door_id in self.doors:
            self.doors[door_id] = request.open
            response.success = True
            response.message = f"Door {door_id} {action} successfully (simulated)."
        else:
            response.success = False
            response.message = f"Invalid door ID: {door_id}. Use UL, UR, DL, DR or ALL."
            self.get_logger().error(response.message)
        return response

    def publish_status(self):
        msg = CompartmentStatus()
        msg.ul_open = self.doors["UL"]
        msg.ur_open = self.doors["UR"]
        msg.dl_open = self.doors["DL"]
        msg.dr_open = self.doors["DR"]
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = CompartmentManager()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
