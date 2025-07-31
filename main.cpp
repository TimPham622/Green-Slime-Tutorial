#include <bits/stdc++.h>
using namespace std;
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {
    cout << "Enter your name: ";
    string playerName;
    getline(cin, playerName);

    if(playerName.empty()) {
        playerName = "Human";
    }

    Human human(playerName);
    Computer computer;

    Referee referee;
    Player* winner = referee.refGame(&human, &computer);

    if(winner == nullptr) {
        cout << "It's a Tie.";
    } else {
        cout << winner->getName() << " Wins.";
    }

    return 0;
}