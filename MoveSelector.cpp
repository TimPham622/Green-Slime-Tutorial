#include "MoveSelector.h"

#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Robot.h"
#include "Pirate.h"
#include "Ninja.h"
#include "Zombie.h"


Move* MoveSelector::createMove(const std::string& moveName) {
    if (moveName == "Rock") return new Rock();
    if (moveName == "Paper") return new Paper();
    if (moveName == "Scissors") return new Scissors();
    if (moveName == "Monkey") return new Monkey();
    if (moveName == "Robot") return new Robot();
    if (moveName == "Pirate") return new Pirate();
    if (moveName == "Ninja") return new Ninja();
    if (moveName == "Zombie") return new Zombie();

    return nullptr;
}