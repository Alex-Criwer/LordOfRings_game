#include "AndrewAlgorithm.h"


bool left(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - b.y) - (c.x - b.x) * (b.y - a.y) < 0;
}

bool right(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - b.y) - (c.x - b.x) * (b.y - a.y) > 0;
}

void StrategyAndrew::doAlgorithmConvexHull() {
    std::sort(coordinates_.begin(), coordinates_.end(), [](Point a, Point b) {
        return a.x < b.x || (a.x == b.x && a.y < b.y);
    });
    Point A = coordinates_[0], B = coordinates_[coordinates_.size() - 1];
    std::vector<Point> up, down;
    up.push_back(A);
    down.push_back(A);
    for (int i = 1; i < coordinates_.size(); ++i) {
        if (i == coordinates_.size() - 1 || left(A, coordinates_[i], B)) {
            while (up.size() >= 2 && !left(up[up.size() - 2], up[up.size() - 1], coordinates_[i])) {
                up.pop_back();
            }
            up.push_back(coordinates_[i]);
        }
        if (i == coordinates_.size() - 1 || right(A, coordinates_[i], B)) {
            while (down.size() >= 2 && !right(down[down.size() - 2], down[down.size() - 1], coordinates_[i])) {
                down.pop_back();
            }
            down.push_back(coordinates_[i]);
        }
    }
    coordinates_.clear();
    for (int i = 0; i < up.size(); ++i) {
        coordinates_.push_back(up[i]);
    }
    for (int i = down.size() - 2; i > 0; --i) {
        coordinates_.push_back(down[i]);
    }
}

StrategyAndrew::StrategyAndrew(int i, std::vector<Point> vector) : Strategy(i, vector) {}
