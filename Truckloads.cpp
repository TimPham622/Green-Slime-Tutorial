// Divide by two
//See if it is less than load size
//if not, keep splitting
#include <iostream>
#include "Truckloads.h"
#include <vector>
Truckloads::Truckloads(){};

int Truckloads::numTrucksHelper(int crates, int loadSize, std::vector<int>& memo) {
    if (crates <= loadSize) { //If the load size 
        return 1;
    }
    if (memo[crates] != 1) { 
        return memo[crates];
    }
    int left  = crates / 2; 
    int right = crates - left;

    return memo[crates] = numTrucksHelper(left, loadSize, memo) + numTrucksHelper(right, loadSize, memo);
}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    std::vector<int> memo(numCrates + 1, -1);
    return numTrucksHelper(numCrates, loadSize, memo);
}
