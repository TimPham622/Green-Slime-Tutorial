#include "Referee.h"
#include "Player.h"
#include <iostream>

Referee::Referee(){
    interactions['R'] = 'P';
    interactions['P'] = 'S';
    interactions['S'] = 'R';
}

Player* Referee::refGame(Player* player1, Player* player2){
    char p1 = player1->makeMove();
    char p2 = player2->makeMove();

    if(p1 == p2){
        return nullptr;
    }
    if(p2 == interactions[p1]){
        return player2;
    } else {
        return player1;
    }
}
