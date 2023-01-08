import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from turtlesim.srv import TeleportAbsolute
from turtlesim.srv import Spawn
from std_srvs.srv import Empty
import time

class TurtlePositioning(Node):

    def __init__(self):
        super().__init__('turtle_positioning')
        
        self.declare_parameters(
            namespace='',
            parameters=[
                ('x_tel', 0.0),
                ('y_tel', 0.0),
                ('theta_tel', 0.0),
                ('x_spawn', 0.0),
                ('y_spawn', 0.0),
                ('theta_spawn', 0.0)
            ])
            
        x_tel = self.get_parameter('x_tel')
        y_tel = self.get_parameter('y_tel')
        theta_tel = self.get_parameter('theta_tel')
        
        x_spawn = self.get_parameter('x_spawn')
        y_spawn = self.get_parameter('y_spawn')
        theta_spawn = self.get_parameter('theta_spawn')
        time.sleep(1)
        self.call_service_teleport(x_tel.value, y_tel.value, theta_tel.value)
        time.sleep(1)
        self.call_service_spawn(x_spawn.value, y_spawn.value, theta_spawn.value)
        time.sleep(1)   
        self.call_service_clear()       
        
    def call_service_teleport(self, x, y, theta):
        client = self.create_client(TeleportAbsolute, "/turtle1/teleport_absolute")
        request = TeleportAbsolute.Request()
        request.x = x
        request.y = y
        request.theta = theta
        future = client.call_async(request)
        def callback_call_service(self, future):
            try:
                response = future.result()
            except Exception as e:
                self.get_logger().error("Call failed")


    def call_service_spawn(self,x, y, theta):
        client = self.create_client(Spawn, "/spawn")
        request = Spawn.Request()
        request.x = x
        request.y = y
        request.theta = theta
        future = client.call_async(request)
        def callback_call_service(self, future):
            try:
                response = future.result()
            except Exception as e:
                self.get_logger().error("Call failed")
               
        
    def call_service_clear(self):
        client = self.create_client(Empty, "/clear")
        request = Empty.Request()
        future = client.call_async(request)
        def callback_call_service(self, future):
            try:
                response = future.result()
            except Exception as e:
                self.get_logger().error("Call failed")
                                
def main(args=None):
    rclpy.init(args=args)
    node = TurtlePositioning()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
