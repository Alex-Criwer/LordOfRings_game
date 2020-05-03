#pragma once

#include "army.h"
#include <string>


class Traitor{
    Army* heros;
    Army* villains;
    std::string whoIsTraitor;
    int numberOfTriotors;

public:
    Traitor(Army* heros, Army* villains, std::string whoIsTraitor,const int number);
    void betrayal();
};