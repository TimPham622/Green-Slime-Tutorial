// Divide by two
//See if it is less than load size
//if not, keep splitting
#include <iostream>
#include "Truckloads.h"
Truckloads::Truckloads(){};

int Truckloads::numTrucksHelper(int crates, int loadSize) {
    if (crates <= loadSize) {
        return 1;
    }
    int left  = crates / 2; 
    int right = crates - left;   

    return numTrucksHelper(left, loadSize) + numTrucksHelper(right, loadSize);
}

int Truckloads::numTrucks(int numCrates, int loadSize) {
    return numTrucksHelper(numCrates, loadSize);
}
