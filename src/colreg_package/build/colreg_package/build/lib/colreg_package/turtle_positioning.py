import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from turtlesim.srv import TeleportAbsolute


class TurtlePositioning(Node):

    def __init__(self):
        super().__init__('turtle_controller')
        self.call_service_teleport("/turtle1/teleport_absolute", 1.0, 1.0, 0.0)
        self.call_service_spawn("/spawn",2.0, 2.0, 0.0)

    def call_service_teleport(self, turtle,  x, y, theta):
        client = self.create_client(TeleportAbsolute, turtle)

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


    def call_service_spawn(self, turtle,  x, y, theta):
        client = self.create_client(Spawn, turtle)

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



def main(args=None):
    rclpy.init(args=args)
    node = TurtlePositioning()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
