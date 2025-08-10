#pragma once
#include <string>
#include "Move.h"


class MoveSelector {
public:
    static Move* createMove(const std::string& moveName);
};
