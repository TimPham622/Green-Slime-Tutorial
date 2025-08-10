#pragma once
#include <string>

#include "Player.h"

class Human : public Player {
public:
    Human(std::string name = "Human");
    Move* makeMove() override;
};