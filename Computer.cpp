// We assume that the computer player only plays Rock and has the name "Computer"

#include <bits/stdc++.h>
#include "Computer.h"
#include "Player.h"

Computer::Computer(){
    Name = "Computer";
    move = 'R'; 
}

char Computer::makeMove(){
    return move;
}

std::string Computer::getName(){return Name;}


