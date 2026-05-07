# rm_mission_bt — Mission Behavior Trees (BehaviorTree.CPP + Groot2)

This package defines and executes the SkyFood robot's **high-level mission logic** using
[BehaviorTree.CPP v4](https://www.behaviortree.dev/) and the
[Groot2](https://www.behaviortree.dev/groot/) visual editor.



## Overview

| Component | Role |
|---|---|
| `bt_xml/*.xml` | Mission trees — **edit these in Groot2** |
| `include/rm_mission_bt/` | C++ BT leaf node headers |
| `src/*_node.cpp` | C++ BT leaf node implementations |
| `src/mission_runner.cpp` | ROS2 node that loads XML, ticks the tree, streams state to Groot2 |
| `rm_behaviors` (sibling pkg) | ROS2 service/action servers called by leaf nodes |

The tree structure lives entirely in XML — no C++ recompilation is needed to change
the mission logic. C++ is only touched when adding a **new kind of behavior** (new leaf node type).



## Using Groot2

### Offline tree design (no robot needed)

1. Open Groot2: `groot2`
2. **File → Load** → pick any `.xml` file from `bt_xml/`
3. Design your tree by dragging nodes from the palette on the left
4. **File → Save** — the XML is updated in place
5. Launch the mission runner to execute it

> The `<TreeNodesModel>` section inside each XML file teaches Groot2 about
> all SkyFood custom nodes and their ports, so they appear in the palette
> without needing the running program.

### Live monitoring (robot running)

1. Start the mission runner as shown above
2. Open Groot2: `groot2`
3. Click **Connect** (top-right)
4. Server: `localhost`, Port: `1667` → **OK**
5. The tree lights up green/red/yellow as it ticks



## Adding a New Behavior Type

> Only needed when you want a *new kind of action* (e.g. "dock robot", "call elevator").
> To change *what the robot does*, just edit the XML in Groot2 — no C++ needed.

### Step 1 — Create the leaf node header

```
include/rm_mission_bt/my_new_node.hpp
```

```cpp
#pragma once
#include <behaviortree_cpp/action_node.h>
#include <rclcpp/rclcpp.hpp>
#include <rm_interfaces/srv/my_new_service.hpp>

namespace rm_bt {

class MyNewNode : public BT::StatefulActionNode {
public:
  MyNewNode(const std::string & name, const BT::NodeConfig & config, rclcpp::Node::SharedPtr node);
  static BT::PortsList providedPorts();
  BT::NodeStatus onStart()   override;
  BT::NodeStatus onRunning() override;
  void           onHalted()  override;

private:
  using Srv = rm_interfaces::srv::MyNewService;
  rclcpp::Node::SharedPtr        node_;
  rclcpp::Client<Srv>::SharedPtr client_;
  struct State { std::atomic<bool> done{false}; bool success{false}; };
  std::shared_ptr<State> ss_;
};

} // namespace rm_bt
```

### Step 2 — Implement in `src/my_new_node.cpp`

Follow the same pattern as `save_map_node.cpp`:
- Call the service asynchronously in `onStart()` using `async_send_request()`.
- In the callback lambda, set `ss_->success` and `ss_->done = true`.
- `onRunning()` checks `ss_->done` and returns SUCCESS/FAILURE.

### Step 3 — Register in `src/mission_runner.cpp`

```cpp
#include "rm_mission_bt/my_new_node.hpp"
// ...
factory_.registerNodeType<rm_bt::MyNewNode>("MyNewNode", node_ptr);
```

### Step 4 — Add to `CMakeLists.txt`

```cmake
add_library(rm_bt_plugins SHARED
  ...
  src/my_new_node.cpp   # <-- add this line
)
```

### Step 5 — Declare the node in the XML model

Add to `<TreeNodesModel>` in any XML file you want to use it in:

```xml
<Action ID="MyNewNode">
  <input_port name="some_param">Description of the port</input_port>
</Action>
```

### Step 6 — Rebuild and use in Groot2

```bash
cd skyfood_ws
colcon build --packages-select rm_mission_bt
```

The node now appears in the Groot2 palette. Drag it into any tree.


## Architecture Diagram

```
┌─────────────────────────────────────────┐
│           Groot2 Editor                 │
│  ┌───────────┐   ┌──────────────────┐   │
│  │ Offline   │   │ Live Monitor     │   │
│  │ XML edit  │   │ ZMQ :1667        │   │
│  └─────┬─────┘   └────────┬─────────┘   │
└────────│────────────────  │─────────────┘
         │ XML file         │ ZMQ
         ▼                  ▼
┌──────────────────────────────────────────────┐
│              mission_runner (C++)            │
│  BT::Factory + BT::Tree + Groot2Publisher    │
│  Ticks at 10 Hz via ROS2 wall timer          │
│                                              │
│  ┌──────────────┐  ┌──────────────┐  ...    │
│  │NavigateToPOI │  │  PlaySound   │         │
│  │ (leaf node)  │  │ (leaf node)  │         │
│  └──────┬───────┘  └──────┬───────┘         │
└─────────│─────────────────│─────────────────┘
          │ ROS2 action      │ ROS2 service
          ▼                  ▼
┌─────────────────────────────────────────────┐
│              rm_behaviors (Python)          │
│  poi_manager  sound_player  map_manager     │
│  compartment_manager                        │
└─────────────────────────────────────────────┘
```
