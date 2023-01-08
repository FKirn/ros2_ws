import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import String
from turtlesim.srv import TeleportAbsolute


class TurtleController(Node):

    def __init__(self):
        super().__init__('turtle_controller')
        #self.get_yaml_data()
        self.call_service_teleport(1.0, 1.0, 0.0)
        self.cmd_vel_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", self.pose_callback, 10)

    def pose_callback(self, pose: Pose):

        cmd = Twist()
        cmd.linear.x = 1.0
        cmd.angular.z = 0.0
        self.cmd_vel_publisher_.publish(cmd)

    def send_vel_command(self, pose: Pose):
        cmd = Twist()
        cmd.linear.x = 0.2
        cmd.angular.z = 0.1
        self.cmd_vel_publisher_.publish(cmd)

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

    def get_yaml_data(self):
        with open('head_on.yaml', 'r') as read_file:
            data = yaml.safe_load(read_file)
            print(data)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
