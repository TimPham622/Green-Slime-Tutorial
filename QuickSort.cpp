#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list){
    quickSort(list, 0, list.size()-1); 
    return list;
}

void QuickSort::quickSort(std::vector<int>& list, int low, int high){
    if (low >= high){
        return;
    }
    if (high-low >= 3){
        std::swap(list[low], list[low+2]);
    }
    
    int left = low+1, right = high;
    while (left <= right){
        while (left <= high && list[left] <= list[low]){
            left++;
        }
        while (right >= low && list[right] > list[low]){
            right--;
        }
        if (left < right){
            std::swap(list[left], list[right]);
            left++;
            right--;
        }

    }
    std::swap(list[low], list[right]);
    return  quickSort(list, low, right-1), quickSort(list, right+1, high);
}