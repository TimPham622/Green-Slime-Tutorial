#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include <bits/stdc++.h>

int main(){
    Computer comp;
    Human hum;
    Referee ref;

    Player* finish = ref.refGame(&hum,&comp);
}