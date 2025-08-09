#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Zombie: public Move{
    public:
        string getName(){
            return "Zombie";
        }
        Zombie(){
            wins.push_back("Pirate");
            wins.push_back("Monkey");
        }

};

