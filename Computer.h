#pragma once

#include <string>

#include "Player.h"

class Computer : public Player{
public:
    // implement the virtual functions from player
    Move* makeMove();
    std::string getName();
};

