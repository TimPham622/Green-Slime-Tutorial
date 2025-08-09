#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Player.h"

class Computer: public Player{
    public:
        virtual string getName();
        virtual Move * makeMove();
        Computer();
};

