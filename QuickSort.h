#pragma once
#include <vector>
#include "Sort.h"

class QuickSort : public Sort {
private:
    void quickSort(std::vector<int>& list, int low, int high);
public:
    std::vector<int> sort(std::vector<int> list);
};
