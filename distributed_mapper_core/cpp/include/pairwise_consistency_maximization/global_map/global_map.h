// Copyright (C) 2018 by Pierre-Yves Lajoie <lajoie.py@gmail.com>

#ifndef GLOBAL_MAP_SOLVER_H
#define GLOBAL_MAP_SOLVER_H

#include "robot_local_map/robot_local_map.h"
#include "pairwise_consistency/pairwise_consistency.h"
#include <string>

/** \namespace global_map
 *  \brief This namespace encapsulates functions and classes to aggregate measurements in a global map
 */
namespace global_map {
    /** \class GlobalMap
     * \brief Class storing the global map from multiple robots local maps to compute PCM.
     */ 
    class GlobalMap {
      public:
        /** \var CONSISTENCY_MATRIX_FILE_NAME
         * \brief File name in which the consistency matrix will be saved
         */
        static const std::string CONSISTENCY_MATRIX_FILE_NAME;

        /** \var CONSISTENCY_LOOP_CLOSURES_FILE_NAME
         * \brief File name in which the consistent loop closures will be saved
         */
        static const std::string CONSISTENCY_LOOP_CLOSURES_FILE_NAME;

        /**
         * \brief Constructor
         *
         * @param robot1_local_map Local map of robot 1.
         * @param robot2_local_map Local map of robot 2.
         * @param interrobot_measurements Inter-robot measurements.
         */
        GlobalMap(const robot_local_map::RobotLocalMap& robot1_local_map,
                        const robot_local_map::RobotLocalMap& robot2_local_map,
                        const robot_local_map::RobotMeasurements& interrobot_measurements);

        /**
         * \brief Function that solves the global maps according to the current constraints
         *
         * @return the size of the maximum clique.
         */
        std::vector<int> pairwiseConsistencyMaximization();

      private:
        pairwise_consistency::PairwiseConsistency pairwise_consistency_; ///< Pairwise consistency solver.

    }; 
}

#endif