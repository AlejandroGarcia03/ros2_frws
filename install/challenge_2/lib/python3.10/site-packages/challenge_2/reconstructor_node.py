import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import numpy as np
from scipy import signal
from my_msg_interfaces.msg import MyParameter

class Signal_Reconstructor(Node):
    def __init__(self):
        super().__init__('signal_reconstruction_node')

        self.current_signal = 0
        self.a = 0.0
        self.f = 0.0
        self.offset = 0.0
        self.phase = 0.0
        self.t = 0
        self.p = 0.0

        self.signal_timer_period = 1e-2

        self.signal_msg = Float32()

        self.signal_pub = self.create_publisher(MyParameter, 'signal_reconstructed', 10)
        self.signal_params_sub = self.create_subscription(MyParameter, 'signal_parameters', self.signal_params_callback, 10)

        self.signal_timer = self.create_timer(self.signal_timer_period, self.signal_timer_callback)

    def signal_timer_callback(self):
        msg_signal=MyParameter()
        msg_signal.ampl=self.a
        msg_signal.freq=self.f
        msg_signal.offset=self.offset
        msg_signal.time=self.t
        msg_signal.type=self.current_signal
        msg_signal.phas=self.p

        if self.current_signal == 0 :
            wave = self.a * np.sin( self.t*self.f+self.p) + self.offset
        elif self.current_signal == 1 :
            wave = self.a * signal.square( self.t*self.f+self.p) + self.offset
        elif self.current_signal == 1 :
            wave = self.a * signal.sawtooth( self.t*self.f+self.p ) + self.offset
        
        msg_signal.signal = wave
        self.signal_pub.publish(msg_signal)
    
    def signal_params_callback(self, msg):
        self.current_signal = msg.type
        self.a = msg.ampl
        self.f = msg.freq
        self.offset = msg.offset
        self.t = msg.time
        self.p = msg.phas


def main(args=None):
    rclpy.init(args=args)
    node = Signal_Reconstructor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()