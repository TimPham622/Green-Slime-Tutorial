#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Monkey: public Move{
    public:
        string getName(){
            return "Monkey";
        }
        Monkey(){
            wins.push_back("Ninja");
            wins.push_back("Robot");
        };

};