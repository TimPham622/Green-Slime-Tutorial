#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Robot: public Move{
    public:
        string getName(){
            return "Robot";
        }
        Robot(){
            wins.push_back("Ninja");
            wins.push_back("Zombie");
        };

};