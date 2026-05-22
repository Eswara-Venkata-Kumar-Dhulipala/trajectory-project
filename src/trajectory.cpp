#include <iostream>
#include "trajectory.h"

void trajectory::addpoint(const trajectorypoint& p)
{
    points.push_back(p);
}

void trajectory::printtrajectory() const
{
    std::cout << "Trajectory Points:" << std::endl;
    for (const auto& point: points)
    {
        point.printpoint();
        std::cout << "-------------------" << std::endl;
    }

}
// adding comment to test git
int trajectory::size() const
{
    return points.size();
}