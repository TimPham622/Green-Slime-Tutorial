#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Player.h"

class Human: public Player{
public:
    Human();
    Human(string Name);
    char makeMove();
    string getName();
};
