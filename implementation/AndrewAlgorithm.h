#pragma once

#include "stragedy.h"
#include "algorithm"

class StrategyAndrew : public Strategy {
    void doAlgorithmConvexHull() override;

public:
    StrategyAndrew(int i, std::vector<Point> vector);
};


