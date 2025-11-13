#include "rclcpp/rclcpp.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("point_cloud_subscriber");
    RCLCPP_INFO(node->get_logger(), "Point Cloud Subscriber Node has been started.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}