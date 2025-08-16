#include <iostream>
#include <string>
#include "Reverser.h"
Reverser::Reverser() {};

int Reverser::reverseDigit(int value) {
    std::cout << value % 10;
    if (value < 10) {
        return -1;
    }
    return reverseDigit(value / 10);
}

std::string Reverser::reverseString(std::string characters) {
    if (characters.length() <= 1) {
        return characters;
    }
    else {
        return reverseString(characters.substr(1)) + characters[0];
    }
}
