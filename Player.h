#pragma once
#include <bits/stdc++.h>
using namespace std;

class Player {
    protected:
    string Name;
    char move;

    public:
    Player();
    virtual char makeMove() = 0;
    virtual string getName() = 0;
};