#pragma once
#include <bits/stdc++.h>
using namespace std;

class TrieNode {
    public:
    
    char letter;
    bool endOfWord;
    unordered_map<char, TrieNode*> children; 

    TrieNode(char letter);
};

class Autocomplete {
    private:
    TrieNode* start;

    void deleteChildren(TrieNode* node);
    void suffixHelper(vector<string>& res, string word, TrieNode* node);

    public:
    Autocomplete();

    ~Autocomplete();

    void insert(string word);

    pair<bool,TrieNode*> searchWord(string word);
    vector<string> getSuggestion(string partialWord);



};