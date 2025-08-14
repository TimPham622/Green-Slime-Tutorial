#include <iostream>
#include <string>

class Reverser{

public:
int reverseDigit(int value) {
    std::cout << value % 10;
    if (value < 10) {
        return -1;
    }
    return reverseDigit(value / 10);
}

std::string reverseString(std::string characters) {
    if (characters.length() <= 0) {
        return characters;
    }
    else {
        return reverseString(characters.substr(1) + characters[0]);
    }
}

};

int main() {
    return 0;
}