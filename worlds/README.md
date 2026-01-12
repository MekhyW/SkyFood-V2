## Model file sources

- https://github.com/leonhartyao/gazebo_models_worlds_collection.git
- https://github.com/mlherd/Dataset-of-Gazebo-Worlds-Models-and-Maps.git

## How to use

Add the models to the `/usr/share/gazebo-*/models` directory:

```bash
sudo cp -r /path/to/models/* /usr/share/gazebo-*/models/
```

Then launch gazebo with the world you want to use:

```bash
sudo gazebo /path/to/worlds/your_world.world
```