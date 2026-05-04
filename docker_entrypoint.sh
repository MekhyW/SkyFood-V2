#!/bin/bash
set -e

# Setup ROS 2 environment
source "/opt/ros/humble/setup.bash"

# Setup project workspace
if [ -f "/skyfood_ws/install/setup.bash" ]; then
    source "/skyfood_ws/install/setup.bash"
fi

# Execute the command passed to the docker container
exec "$@"
