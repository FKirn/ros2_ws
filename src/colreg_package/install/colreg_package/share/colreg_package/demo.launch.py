from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    turtlesim_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name = "turtle"
    )
    turtle_control_node = Node(
        package="colreg_package",
        executable="position,
        name = "position"
    )
    
    ld.add_action(turtle_control_node)
    ld.add_action(turtlesim_node)

    return ld
