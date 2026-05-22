#ifndef TRAJECTORY_H
#define TRAJECTORY_H

#include "trajectorypoint.h"
#include <vector>

class trajectory
{
    private:
    std::vector<trajectorypoint> points;
    
    public:
    void addpoint(const trajectorypoint& point);
    void printtrajectory() const;
    int size() const;
};

#endif