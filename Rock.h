#include "Move.h"
#pragma once

class Rock: public Move{
    public:
        string getName(){
            return "Rock";
        }
        Rock(){
            wins.push_back("Scissors");
        };
};