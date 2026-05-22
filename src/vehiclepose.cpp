#include <iostream>
#include "vehiclepose.h"

vehiclepose::vehiclepose():
x(0.0), y(0.0), yaw(0.0)
{
}

vehiclepose::vehiclepose(double x_, double y_, double yaw_):
x(x_), y(y_), yaw(yaw_)
{
}

double vehiclepose::getX() const
{
    return x;
}

double vehiclepose::getY() const
{
    return y;
}

double vehiclepose::getYaw() const
{
    return yaw;
}

void vehiclepose::setX(double x_)
{
    x = x_;
}

void vehiclepose::setY(double y_)
{
    y = y_;
}

void vehiclepose::setYaw(double yaw_)
{
    yaw = yaw_;
}

void vehiclepose::printpose() const
{
    std::cout << "X: " << x
    << "Y: " << y
    << "Yaw: " << yaw
    << std::endl;

}