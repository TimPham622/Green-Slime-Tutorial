#pragma once

#include "Player.h"

class Computer : public Player {
public:
    Computer(std::string name = "Computer");
    Move* makeMove() override;
};
