#pragma once

#include <string>
#include "MoveSelector.h"
// abstract class that has children Human and Computer
class Player {
public:
    MoveSelector move_selector;
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;
};
