
import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import String


class TurtleController(Node):

    def __init__(self):
        super().__init__('turtle_controller')
        self.cmd_vel_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel",10)
        self.pose_subscriber_ = self.create_publisher(Pose, "/turtle1/pose",self.pose_callback, 10)

    def pose_callback(self):
        cmd = Twist()
        cmd.linear.x = 5.0
        cmd.angular.z = 0.0
        self.cmd_vel_publisher_.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = TurtleController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
