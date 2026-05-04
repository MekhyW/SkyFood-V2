"""
sound_player.py
===============
ROS2 node that exposes:

  /sound_player/play  (rm_interfaces/srv/PlaySound)
      Plays an audio file (WAV / MP3 / OGG) via the system audio stack.
      Falls back through: paplay → aplay → mpg123/ogg123 → afplay.
      When blocking=true the service call waits for playback to finish.
      When blocking=false it spawns a background process and returns
      immediately.

Usage
-----
  ros2 run rm_behaviors sound_player

  # Quick test
  ros2 service call /sound_player/play rm_interfaces/srv/PlaySound \
    "{file_path: '/opt/sounds/chime.wav', blocking: true}"
"""

import os
import subprocess
import shutil
from typing import Optional
import rclpy
from rclpy.node import Node
from rclpy.callback_groups import ReentrantCallbackGroup
from rm_interfaces.srv import PlaySound


# Ordered list of (command, extensions) pairs.
# The first command whose executable is found on PATH is used.
_PLAYERS = [
    ('paplay',   ['.wav', '.ogg', '.flac']),
    ('aplay',    ['.wav']),
    ('mpg123',   ['.mp3']),
    ('ogg123',   ['.ogg']),
    ('ffplay',   ['.wav', '.mp3', '.ogg', '.flac', '.m4a']),
    ('afplay',   ['.wav', '.mp3', '.ogg', '.flac', '.m4a']),  # macOS
]


def _find_player(ext: str) -> Optional[str]:
    for cmd, exts in _PLAYERS:
        if ext.lower() in exts and shutil.which(cmd):
            return cmd
    # Last resort: try ffplay for anything
    if shutil.which('ffplay'):
        return 'ffplay'
    return None


class SoundPlayerNode(Node):
    """Plays audio files via OS audio backends."""

    def __init__(self) -> None:
        super().__init__('sound_player')
        cbg = ReentrantCallbackGroup()
        self._srv = self.create_service(PlaySound, '/sound_player/play', self._handle_play, callback_group=cbg)
        self._bg_proc: Optional[subprocess.Popen] = None
        self.get_logger().info('SoundPlayer ready — /sound_player/play service active.')

    # ------------------------------------------------------------------
    def _handle_play(self, request: PlaySound.Request, response: PlaySound.Response) -> PlaySound.Response:
        file_path = os.path.expanduser(request.file_path)
        if not os.path.isfile(file_path):
            response.success = False
            response.message = f'Audio file not found: {file_path}'
            self.get_logger().error(response.message)
            return response
        ext = os.path.splitext(file_path)[1]
        player = _find_player(ext)
        if player is None:
            response.success = False
            response.message = f'No suitable audio player found for {ext}. Install paplay (PulseAudio), aplay, mpg123 or ffmpeg.'
            self.get_logger().error(response.message)
            return response
        cmd = [player, file_path]
        if player == 'ffplay': # ffplay needs extra flags to suppress the video window
            cmd = ['ffplay', '-nodisp', '-autoexit', '-loglevel', 'error', file_path]
        self.get_logger().info(f'Playing [{player}]: {file_path}  (blocking={request.blocking})')
        try:
            if request.blocking:
                result = subprocess.run(cmd, timeout=120)
                response.success = (result.returncode == 0)
                response.message = 'Playback finished.' if response.success else f'{player} exited with code {result.returncode}'
            else:
                # Kill any previously running background sound
                if self._bg_proc and self._bg_proc.poll() is None:
                    self._bg_proc.terminate()
                self._bg_proc = subprocess.Popen(cmd)
                response.success = True
                response.message = f'Playback started (pid={self._bg_proc.pid})'
        except subprocess.TimeoutExpired:
            response.success = False
            response.message = 'Playback timed out after 120 s'
            self.get_logger().error(response.message)
        except Exception as exc:  # noqa: BLE001
            response.success = False
            response.message = f'Error: {exc}'
            self.get_logger().error(response.message)
        return response


def main(args=None) -> None:
    rclpy.init(args=args)
    node = SoundPlayerNode()
    executor = rclpy.executors.MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
