#include "Human.h"
#include "MoveSelector.h"
#include <iostream>


Human::Human(std::string name) : Player(name) {}

Move* Human::makeMove() {
    std::string input;
    std::cout << "Enter Move: ";
    std::cin >> input;

    return MoveSelector::createMove(input);
}