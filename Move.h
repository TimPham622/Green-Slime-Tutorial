#pragma once
#include <bits/stdc++.h>
using namespace std;

class Move {
    protected:
    string name;
    vector<string> wins;

    public:
    virtual string getName();
    bool compareMove(Move * move);
};