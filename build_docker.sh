#!/bin/bash

# Detect architecture
ARCH=$(uname -m)

# Default base images
X86_IMAGE="osrf/ros:humble-desktop"
JETSON_IMAGE="dustynv/ros:humble-ros-base-l4t-r36.3.0"

if [ "$ARCH" == "aarch64" ]; then
    echo "Detected Jetson (aarch64) architecture."
    export BASE_IMAGE=$JETSON_IMAGE
else
    echo "Detected PC (x86_64) architecture."
    export BASE_IMAGE=$X86_IMAGE
fi

echo "Building SkyFood-V2 with base image: $BASE_IMAGE"

# Build using docker compose
docker compose build
