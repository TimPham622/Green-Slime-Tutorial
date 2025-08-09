#pragma once
using namespace std;
#include <bits/stdc++.h>
#include "Player.h"
#include "Move.h"

class Human: public Player{
    protected:
    public:
        Human();
        Human(string name);
        virtual Move * makeMove();
        virtual string getName();

};