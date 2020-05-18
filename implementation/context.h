#pragma once

#include "AndrewAlgorithm.h"
#include "JarvisAlgorithm.h"

class Context {
    Strategy *strategy;
public:
    Context(Strategy *strategy) : strategy(strategy) {}

    void setStrategy(Strategy *anotherStrategy);

    void makeAnEnemyBypassMap();

    Strategy *getStrategy() const;

    ~Context();
};
