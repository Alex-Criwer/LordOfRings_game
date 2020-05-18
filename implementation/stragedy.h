#pragma once

#include<iostream>
#include <vector>
#include "point.h"

class Strategy {
protected:
    int size_ = 0;
    std::vector<Point> coordinates_;
public:
    Strategy(int size, std::vector<Point> coordinates) : size_(size), coordinates_(coordinates) {}

    virtual void doAlgorithmConvexHull() = 0;

    std::vector<Point> &getMap() {
        return coordinates_;
    }

    virtual ~Strategy() {
        coordinates_.clear();
    }
};
