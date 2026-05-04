"""
behaviors/play_sound.py
=======================
py_trees Behaviour that calls /sound_player/play.

  from rm_mission_bt.behaviors.play_sound import PlaySound

  chime = PlaySound(
      name='Play arrival chime',
      node=node,
      file_path='/opt/sounds/arrival.wav',
      blocking=False,       # fire-and-forget; blocking=True waits for finish
  )
"""

import py_trees
import rclpy
from rclpy.node import Node
from rm_interfaces.srv import PlaySound as PlaySoundSrv


class PlaySound(py_trees.behaviour.Behaviour):
    """
    Leaf behaviour — play an audio file.

    Returns
    -------
    SUCCESS  playback started (or finished if blocking=True)
    FAILURE  file not found / no audio backend available
    """

    def __init__(self, name: str, node: Node, file_path: str, blocking: bool = False,) -> None:
        super().__init__(name)
        self._node = node
        self._file_path = file_path
        self._blocking = blocking
        self._client = node.create_client(PlaySoundSrv, '/sound_player/play')

    def setup(self, **kwargs) -> None:  # noqa: ANN003
        if not self._client.wait_for_service(timeout_sec=5.0):
            raise RuntimeError('/sound_player/play service not available (timeout 5 s)')

    def update(self) -> py_trees.common.Status:
        req = PlaySoundSrv.Request()
        req.file_path = self._file_path
        req.blocking = self._blocking
        timeout = 130.0 if self._blocking else 5.0
        future = self._client.call_async(req)
        rclpy.spin_until_future_complete(self._node, future, timeout_sec=timeout)
        if not future.done():
            self.feedback_message = 'Timed out waiting for sound_player'
            return py_trees.common.Status.FAILURE
        resp = future.result()
        self.feedback_message = resp.message
        return py_trees.common.Status.SUCCESS if resp.success else py_trees.common.Status.FAILURE
