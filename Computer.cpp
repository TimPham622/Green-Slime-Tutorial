#include "Computer.h"
#include "Rock.h" 
Computer::Computer(std::string name) : Player(name) {}

Move* Computer::makeMove() {
    return new Rock();
}