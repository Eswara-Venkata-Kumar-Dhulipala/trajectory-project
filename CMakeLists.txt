cmake_minimum_required(VERSION 3.10)

project(TrajectoryProject)

set(CMAKE_CXX_STANDARD 17)

cmake_minimum_required(VERSION 3.10)

include_directories(include)

add_executable(trajectory_app
    src/main.cpp
    src/vehiclepose.cpp
    src/trajectorypoint.cpp
    src/trajectory.cpp
)