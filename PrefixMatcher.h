#pragma once
#include <bits/stdc++.h>
using namespace std;


class RouterNode {
public:
    char letter;
    int routerNumber = -1;
    unordered_map<char, RouterNode*> children;
    RouterNode(char letter);
};

class PrefixMatcher {
private:
    RouterNode* start;
    void deleteChildren(RouterNode* node);

public:
    PrefixMatcher();
    ~PrefixMatcher();

    void insert(string address, int routerNumber);
    
    int selectRouter(string networkAddress);
};
