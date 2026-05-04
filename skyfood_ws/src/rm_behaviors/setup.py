from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'rm_behaviors'

setup(
    name=package_name,
    version='0.1.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'),
            glob('launch/*.py')),
        (os.path.join('share', package_name, 'config'),
            glob('config/*')),
        (os.path.join('share', package_name, 'sounds'),
            glob('sounds/*')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mekhy',
    maintainer_email='mefkhytheroboticist@gmail.com',
    description='Atomic robot behavior nodes: map management, POI navigation, sound playback.',
    license='Apache-2.0',
    extras_require={'test': ['pytest']},
    entry_points={
        'console_scripts': [
            'map_manager    = rm_behaviors.map_manager:main',
            'poi_manager    = rm_behaviors.poi_manager:main',
            'sound_player   = rm_behaviors.sound_player:main',
        ],
    },
)
