ARG BASE_IMAGE=osrf/ros:humble-desktop
FROM ${BASE_IMAGE}

# Set non-interactive to avoid timezone prompts and other blocks
ENV DEBIAN_FRONTEND=noninteractive

# Install essential build tools, dependencies, and rosdep
RUN apt-get update && apt-get install -y \
    python3-pip \
    python3-colcon-common-extensions \
    git \
    nano \
    tmux \
    wget \
    curl \
    lsb-release \
    gnupg2 \
    mesa-utils \
    libgl1-mesa-glx \
    ros-humble-gazebo-ros-pkgs \
    ros-humble-navigation2 \
    ros-humble-nav2-bringup \
    ros-humble-slam-toolbox \
    ros-humble-robot-localization \
    ros-humble-teleop-twist-keyboard \
    ros-humble-rmw-cyclonedds-cpp \
    python3-rosdep \
    && rm -rf /var/lib/apt/lists/*

# Set CycloneDDS as the RMW implementation
ENV RMW_IMPLEMENTATION=rmw_cyclonedds_cpp

# Initialize rosdep if not already done
RUN if [ ! -f /etc/ros/rosdep/sources.list.d/20-default.list ]; then rosdep init; fi
RUN rosdep update

# Create workspace directory
ENV ROS_WS=/skyfood_ws
WORKDIR ${ROS_WS}

# Copy the source code into the container
COPY skyfood_ws/src ${ROS_WS}/src

# Install ROS dependencies via rosdep
RUN apt-get update && rosdep install -y \
    --from-paths src \
    --ignore-src \
    --rosdistro humble \
    -r \
    && rm -rf /var/lib/apt/lists/*

# Build the workspace
RUN . /opt/ros/humble/setup.sh && colcon build --symlink-install

# Source the workspace inside bashrc for interactive sessions
RUN echo "source /opt/ros/humble/setup.bash" >> /root/.bashrc
RUN echo "source ${ROS_WS}/install/setup.bash" >> /root/.bashrc

# Copy entrypoint script
COPY docker_entrypoint.sh /
RUN chmod +x /docker_entrypoint.sh

ENTRYPOINT ["/docker_entrypoint.sh"]

# Default command if none is provided
CMD ["ros2", "launch", "rm_bringup", "bringup.launch.py"]
