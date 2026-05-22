#ifndef TRAJECTORY_POINT_H
#define TRAJECTORY_POINT_H

#include "vehiclepose.h"

class trajectorypoint
{
    private:
    vehiclepose pose;
    double velocity;
    double timestamp;

    public:
    trajectorypoint();
    trajectorypoint(const vehiclepose& pose_, double velocity_, double timestamp_);

    vehiclepose getpose() const;
    double getvelocity() const;
    double gettimestamp() const;
    void printpoint() const;
};

#endif