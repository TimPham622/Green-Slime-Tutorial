#pragma once

#include <string>

class Move;

class Player {
protected:
    std::string name;

public:
    Player(std::string name);
    virtual ~Player() = default;
    virtual Move* makeMove() = 0;
    std::string getName();
};