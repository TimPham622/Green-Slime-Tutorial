#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

class Player {
    protected:
    string name;
    Move * move;

    public:
    virtual Move * makeMove();
    virtual string getName();
};