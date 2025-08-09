#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Pirate: public Move{
    public:
        string getName(){
            return "Pirate";
        }
        Pirate(){
            wins.push_back("Robot");
            wins.push_back("Monkey");
        };

};
