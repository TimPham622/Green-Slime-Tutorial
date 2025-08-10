#include "Move.h"

Move::Move(std::string name, std::vector<std::string> wins_against)
: name(name), wins_against(wins_against){}

std::string Move::getName() const {
return this-> name;
}

bool Move::beats(Move* other) {
    for (const auto& opponent_name : this->wins_against) {
        if (opponent_name == other->getName()) {
            return true;
        }
    }
    return false;
}



