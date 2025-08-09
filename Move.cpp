#pragma once
#include <bits/stdc++.h>
using namespace std;
#include "Move.h"

string Move::getName() {
    return name;
}

bool Move::compareMove(Move * move){
    if (find(wins.begin(), wins.end(), move->getName())!=wins.end()) {
        return true;
    } else {
        return false;
    }
}