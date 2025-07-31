#pragma once
#include "Player.h"
#include <unordered_map>
using namespace std;

class Referee{
    unordered_map<char,char> interactions;
public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
};

