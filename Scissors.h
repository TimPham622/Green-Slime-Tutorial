#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Scissors: public Move{
    public:
        string getName(){
            return "Scissors";
        }
        Scissors(){
            wins.push_back("Paper");
        }

};

