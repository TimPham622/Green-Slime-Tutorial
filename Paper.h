#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Paper: public Move{
    public:
        string getName(){
            return "Paper";
        }
        Paper(){
            wins.push_back("Rock");
        }

};
