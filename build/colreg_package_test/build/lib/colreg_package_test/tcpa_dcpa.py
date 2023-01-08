import rclpy
from rclpy.node import Node
from turtlesim.msg import Pose
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class SafeDistance(Node):

    def __init__(self):
        super().__init__('tcpa_dcpa_calc')

        self.obs_pose = Pose()
        self.main_pose = Pose()
        self.obs_vel = Twist()
        self.main_vel = Twist()

        self.obs_ship_pose_subscriber_ = self.create_subscription(Pose, "/turtle1/pose", self.obs_pose_callback, 10)
        self.obs_ship_vel_subscriber_ = self.create_subscription(Twist, "/turtle1/cmd_vel", self.obs_vel_callback, 10)
        self.main_ship_pose_subscriber_ = self.create_subscription(Pose, "/turtle2/pose", self.main_pose_callback, 10)
        self.main_ship_vel_subscriber_ = self.create_subscription(Twist, "/turtle2/cmd_vel", self.main_vel_callback, 10)

        self.timer = self.create_timer(1.0, self.calculate_tcpa)

    def obs_pose_callback(self, data):
        self.obs_pose.x = data.x
        self.obs_pose.y = data.y
        self.obs_pose.theta = data.theta
    def main_pose_callback(self, data):
        self.main_pose.x = data.x
        self.main_pose.y = data.y
        self.main_pose.theta = data.theta

    def obs_vel_callback(self, data):
        self.obs_vel.linear.x = data.linear.x
        self.obs_vel.linear.y = data.linear.y   
    def main_vel_callback(self, data):
        self.main_vel.linear.x = data.linear.x
        self.main_vel.linear.y = data.linear.y

    def calculate_tcpa(self):
        print("Hello")
        print(self.obs_pose.x, self.obs_pose.y, self.obs_pose.theta, self.obs_vel.linear.x, self.obs_vel.linear.y, sep="----")


def main(args=None):
    rclpy.init(args=args)
    node = SafeDistance()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
