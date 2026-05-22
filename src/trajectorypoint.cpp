#include <iostream>
#include "trajectorypoint.h"

trajectorypoint::trajectorypoint(): pose(), velocity(0.0), timestamp(0.0) 
{
}

trajectorypoint::trajectorypoint(const vehiclepose& pose_, double velocity_, double timestamp_): pose(pose_), velocity(velocity_), timestamp(timestamp_)
{
}

vehiclepose trajectorypoint::getpose() const
{
    return pose;
}

double trajectorypoint::getvelocity() const
{
    return velocity;
}

double trajectorypoint::gettimestamp() const
{
    return timestamp;
}

void trajectorypoint::printpoint() const
{
    std::cout << "Trajectory Point: " << std::endl;
    pose.printpose();
    std::cout << "Velocity: " << "at " << timestamp << "is " << velocity << std::endl;
}