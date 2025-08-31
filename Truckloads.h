#pragma once
#include <vector>

class Truckloads {
    public:
    Truckloads();
    int numTrucks(int numCrates, int loadSize);
    int numTrucksHelper(int crates, int loadSize, std::vector<int>& memo);
};