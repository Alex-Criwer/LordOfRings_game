#include "context.h"

void Context::setStrategy(Strategy *anotherStrategy) {
    delete this->strategy;
    this->strategy = anotherStrategy;
}

Context::~Context() {
    delete strategy;
}

Strategy *Context::getStrategy() const {
    return strategy;
}

void Context::makeAnEnemyBypassMap() {
    strategy->doAlgorithmConvexHull();
}