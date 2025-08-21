#include <iostream>
#include <vector>
#include <string>


// You are given a number n which can be and eg. 5. generate a pattern that will print 1,2,3,4,5,4,3,2,1
//Generate this recursively


void print(int current, int n) {
    if (current > n) {
        return;
    }

    std::cout << current << " ";
    print(current + 1, n);

    if (current != n) { 
        std::cout << current << " ";
    }
}

int main() {
    int n =5;
    print(1, n);
    return 0;
}