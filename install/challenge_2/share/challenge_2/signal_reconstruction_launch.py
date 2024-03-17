import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    
    config = os.path.join(
        get_package_share_directory('challenge_2'),
            'config',
            'params.yaml'
        )

    signal_node = Node(
        package = 'challenge_2',
        executable = 'signal_generator',
        output = 'screen',
        parameters = [config]
    )

    reconstruction_node = Node(
        package = 'challenge_2',
        executable = 'reconstructor_node',
        output = 'screen'
    )

    
    node_plot = Node(
        package = 'plotjuggler',
        executable = 'plotjuggler',
        parameters = [{'args': 'signal_parameters/signal /signal_reconstructed/wave'}] 
        )
    
    
    ld = LaunchDescription([signal_node, reconstruction_node, node_plot])
    return ld