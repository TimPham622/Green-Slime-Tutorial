#pragma once

class Truckloads {
    public:
    Truckloads();
    int numTrucks(int numCrates, int loadSize);
    int numTrucksHelper(int crates, int loadSize);
};