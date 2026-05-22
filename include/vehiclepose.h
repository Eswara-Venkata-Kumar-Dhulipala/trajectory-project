#ifndef VEHICLE_POSE_H
#define VEHICLE_POSE_H

class vehiclepose
{
private:
double x;
double y;
double yaw;

public:

vehiclepose();

vehiclepose(double x_, double y_, double yaw_);

double getX() const;
double getY() const;
double getYaw() const;

void setX(double x_);
void setY(double y_);
void setYaw(double yaw_);

void printpose() const;
};

#endif