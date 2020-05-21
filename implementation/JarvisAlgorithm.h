#pragma once

#include "stragedy.h"
#include "algorithm"
#include "cmath"


class StrategyJarvis : public Strategy {
    void doAlgorithmConvexHull() override;

    bool TurnLeft(Point &point, Point &point1, Point &point2);

public:
    StrategyJarvis(int i, std::vector<Point> vector);
};







