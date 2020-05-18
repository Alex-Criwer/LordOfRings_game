#include "JarvisAlgorithm.h"


void StrategyJarvis::doAlgorithmConvexHull() {
    int tmpSize = size_;
    for (long int i = 1; i < tmpSize; ++i) {
        if (coordinates_[i].x < coordinates_[0].x) {
            std::swap(coordinates_[i], coordinates_[0]);
        }
        if ((coordinates_[i].x == coordinates_[0].x) &&
            (coordinates_[i].y < coordinates_[0].y)) {
            std::swap(coordinates_[i], coordinates_[0]);
        }
    }
    Point Centre = coordinates_[0];
    for (long int i = 0; i < tmpSize; ++i) {
        coordinates_[i] = Point{coordinates_[i].x - Centre.x, coordinates_[i].y - Centre.y};
    }
    std::sort(coordinates_.begin() + 1, coordinates_.end(), [](Point &A, Point &B) {
        if (atan2(A.y, A.x) == atan2(B.y, B.x)) {
            return sqrtl(A.x * A.x + A.y * A.y) < sqrtl(B.x * B.x + B.y * B.y);
        }
        return atan2(A.y, A.x) < atan2(B.y, B.x);
    });
    coordinates_.push_back(coordinates_[0]);
    ++tmpSize;
    long int cur = 1;
    for (long int i = 2; i < tmpSize; i++) {
        while ((cur > 0) && !TurnLeft(coordinates_[cur - 1], coordinates_[cur], coordinates_[i])) {
            cur--;
        }
        coordinates_[++cur] = coordinates_[i];
    }
    long long int Area = 0;
    for (long int i = 0; i <= cur; ++i) {
        coordinates_[i] = Point{coordinates_[i].x + Centre.x, coordinates_[i].y + Centre.y};
    }
    coordinates_[cur] = coordinates_[1];
    for (long int i = cur; i > 0; --i) {
        std::cout << coordinates_[i].x << " " << coordinates_[i].y << '\n';
    }

}

bool StrategyJarvis::TurnLeft(Point &A, Point &B, Point &C) {
    Point first{B.x - A.x, B.y - A.y};
    Point second{C.x - B.x, C.y - B.y};
    return (first.x * second.y - second.x * first.y) > 0;
}

StrategyJarvis::StrategyJarvis(int i, std::vector<Point> vector) : Strategy(i, vector) {}