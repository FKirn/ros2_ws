import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist
from std_msgs.msg import String


class TargetShipController(Node):

    def __init__(self):
        super().__init__('target_ship_controller')
        
        self.vel_publisher_ = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.pose_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", self.send_vel_command, 10)

    def pose_callback(self, pose: Pose):

        cmd = Twist()
        cmd.linear.x = 0.4
        cmd.angular.z = 0.0
        self.vel_publisher_.publish(cmd)


    def send_vel_command(self, pose: Pose):
        cmd = Twist()
        cmd.linear.x = 0.30
        cmd.linear.y = 0.0
        cmd.angular.z = 0.0
        self.vel_publisher_.publish(cmd)



def main(args=None):
    rclpy.init(args=args)
    node = TargetShipController()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
