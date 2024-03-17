from launch_ros.actions import Node
from launch import LaunchDescription

def generate_launch_description():
    talker_Node=Node(
        package='basic_comms',
        executable='talker',
        output='screen',
    )

    listener_Node=Node(
        package='basic_comms',
        executable='subscriber',
        output='screen',
    )

    rqt_graph_node = Node(
        package='rqt_graph',
        executable='rqt_graph',
        output='screen',
    )

    rqt_plot_node = Node(
        package='rqt_plot',
        executable='rqt_plot',
        output='screen',
    )

    l_D=LaunchDescription([talker_Node, listener_Node, rqt_graph_node, rqt_plot_node])
    return l_D