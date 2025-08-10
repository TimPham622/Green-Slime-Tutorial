#pragma once

#include <string>
#include <vector>
#include <algorithm>

class Move {
    protected:
    std::string name;
    std::vector<std::string> wins_against;

    public:
    Move(std::string name, std::vector<std::string> wins_against);
    virtual ~Move() = default;

    std::string getName() const;

    virtual bool beats(Move * other);
};
