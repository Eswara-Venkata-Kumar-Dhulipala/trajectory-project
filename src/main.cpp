#include <iostream>
#include "trajectory.h"
#include "trajectorypoint.h"
#include "vehiclepose.h"

int main(){
    vehiclepose pose1(0.0, 0.0, 0.0);
    trajectorypoint point1(pose1, 5.0, 0.0);
    trajectory traj;
    traj.addpoint(point1);
    traj.printtrajectory();
    std::cout << "Trajectory size: "<< traj.size() << std::endl;
    trajectorypoint point2(vehiclepose(1.0, 1.0, 0.5), 10.0, 0.0);
    traj.addpoint(point2);
    traj.printtrajectory();
    std::cout << "Trajectory size: " << traj.size() <<std::endl;
    return 0;
    //main branch test
}