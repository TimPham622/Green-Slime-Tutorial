#include <bits/stdc++.h>
using namespace std;


int kth_largest(vector<int> values, int k) {
    priority_queue<int,vector<int>,greater<int>> min_heap;

    for (int value : values) {
        if (min_heap.size() < k) {
            min_heap.push(value);
        }
        else if (value > min_heap.top()) {
            min_heap.pop();
            min_heap.push(value);
        }
    }
    return min_heap.top();
}
