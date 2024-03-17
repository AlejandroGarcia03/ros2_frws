import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import math


class SignalGenerator(Node):
    def __init__(self):
        super().__init__('signal_generator')
        self.publisher_signal = self.create_publisher(Float32, '/signal', 10)
        self.publisher_time = self.create_publisher(Float32, '/time', 10)
        self.timer_period = 0.1  # seconds (10 Hz)
        self.i = 0
        self.create_timer(self.timer_period, self.timer_callback)

    def timer_callback(self):
        msg_signal = Float32()
        msg_signal.data = math.sin(self.i * self.timer_period)
        self.publisher_signal.publish(msg_signal)
        self.get_logger().info('Publishing signal: %f' % msg_signal.data)

        msg_time = Float32()
        msg_time.data = self.i * self.timer_period
        self.publisher_time.publish(msg_time)
        self.get_logger().info('Publishing time: %f' % msg_time.data)

        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    signal_generator = SignalGenerator()
    rclpy.spin(signal_generator)
    signal_generator.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
