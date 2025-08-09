#include <bits/stdc++.h>
#pragma once
#include "Move.h"
using namespace std;
#include "Human.h"
#include "Move.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"

class MoveSelector{
    public:
        MoveSelector(){
        }
        Move * selectMove(std::string moveName){
            Move * move = NULL;
            if (moveName == "Rock"){
                move = new Rock();
            } else if (moveName == "Scissors"){
                move = new Scissors();
            } else if (moveName == "Paper"){
                move = new Paper();
            } else if (moveName == "Monkey"){
                move = new Monkey();
            } else if (moveName == "Robot"){
                move = new Robot();
            } else if (moveName == "Pirate"){
                move = new Pirate();
            } else if (moveName == "Ninja"){
                move = new Ninja();
            } else if (moveName == "Zombie"){
                move = new Zombie();
            }
            return move;
        }
};
