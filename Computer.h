#include <bits/stdc++.h>
#include "Player.h"

#pragma once 

class Computer : public Player {

    public:
    Computer();
    char makeMove();
    string getName();
};

