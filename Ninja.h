#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Ninja: public Move{
    public:
        string getName(){
            return "Ninja";
        }
        Ninja(){
            wins.push_back("Pirate");
            wins.push_back("Zombie");
        };

};

