#include <bits/stdc++.h>
#include "Player.h"
#include "Human.h"

Human::Human() {this->Name = "Human";}

Human::Human(std::string Name) {this->Name = Name;} 


char Human::makeMove(){
    std::cout << "lowk you should rock paper and scissor: ";
    std::cin >> move;

    if(!(move == 'R' || move == 'P' || move == 'S')){
        std::cout << "Please enter a valid move.";

        return makeMove();
    }

    // Returning player's move
    return move;
}

std::string Human::getName(){return Name;};