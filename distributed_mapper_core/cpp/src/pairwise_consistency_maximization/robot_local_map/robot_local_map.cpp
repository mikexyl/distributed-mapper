// Copyright (C) 2018 by Pierre-Yves Lajoie <lajoie.py@gmail.com>

#include "robot_local_map/robot_local_map.h"
#include "graph_utils/graph_utils_functions.h"

namespace robot_local_map {

RobotLocalMap::RobotLocalMap(const graph_utils::Transforms& transforms,
                            const graph_utils::LoopClosures& loop_closures):
                            RobotMeasurements(transforms, loop_closures) {
    trajectory_ = graph_utils::buildTrajectory(transforms_);
}

const graph_utils::Trajectory& RobotLocalMap::getTrajectory() const {
    return trajectory_;
}

}