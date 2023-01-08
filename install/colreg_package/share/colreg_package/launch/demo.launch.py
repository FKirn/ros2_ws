from launch import LaunchDescription
from launch_ros.actions import Node
import os
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    ld = LaunchDescription()

    turtlesim_node = Node(
        package="turtlesim",
        executable="turtlesim_node",
        name = "turtlesim"
    )
    turtle_control_node = Node(
        package="colreg_package",
        executable="position",
        name = "turtle_initial_positioning",
        output="screen",
        parameters=[
                os.path.join(get_package_share_directory("colreg_package"), 'parameters', 'overtaking.yaml')]
    )
    
    target_ship_control_node = Node(
        package="colreg_package",
        executable="target_ship_control",
        name = "target_ship_control"
    )
    
    main_ship_control_node = Node(
        package="colreg_package",
        executable="main_ship_control",
        name = "main_ship_control"
    )
    
    tcpa_dcpa_node = Node(
        package="colreg_package",
        executable="tcpa_dcpa",
        name = "tcpa_dcpa_calculation",
        output="screen"
    )    
    
    avoidance_scenario_node = Node(
        package="colreg_package",
        executable="avoidance_scenario",
        name = "determine_avoidance_scenario",
        output="screen"
    ) 
    
    ld.add_action(turtlesim_node)
    ld.add_action(turtle_control_node)
    ld.add_action(target_ship_control_node)
    ld.add_action(main_ship_control_node)
    ld.add_action(tcpa_dcpa_node)
    ld.add_action(avoidance_scenario_node)
    return ld
