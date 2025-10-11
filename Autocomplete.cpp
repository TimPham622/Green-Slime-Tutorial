#include "Autocomplete.h"

TrieNode::TrieNode(char letter) {
    this-> letter = letter;
}

Autocomplete::Autocomplete() {
    this-> start = new TrieNode(' ');
}

Autocomplete::~Autocomplete() {
    deleteChildren(this-> start);

}


void Autocomplete::deleteChildren(TrieNode* node) {

    for (auto child : node ->children) {
        deleteChildren(child.second);
    }
    delete node;
}

void Autocomplete::insert(string word) {
    TrieNode* currentNode = start;

    for (int i = 0; i < (int)word.length(); i++) {
        if (currentNode->children.find(word[i]) == currentNode->children.end()) {
            currentNode->children[word[i]] = new TrieNode(word[i]);

        }

        currentNode = currentNode->children[word[i]];
    }
    currentNode->endOfWord = true;
}

pair<bool, TrieNode*> Autocomplete::searchWord(string word) {
    TrieNode* currentNode = start;

    for (int i = 0; i < (int)word.length();i++) {
        if (currentNode->children[word[i]] == nullptr) {
            return {false, nullptr};
        }
        currentNode = currentNode -> children[word[i]];
    }

    if (currentNode->endOfWord == true) {
        return {true, currentNode};
    }

    return {false, currentNode};
}

void Autocomplete::suffixHelper(vector<string>& res, string word, TrieNode* node){
    word += node->letter;
    if (node->endOfWord){
        res.push_back(word);
    }
    for (auto pair : node->children){
        suffixHelper(res, word, pair.second);
    }
}

vector<string> Autocomplete::getSuggestions(string partialWord){
    vector<string> words;

    auto endOfWord = searchWord(partialWord);
    
    if (endOfWord.first){
        words.push_back(partialWord);
    }

    if (endOfWord.second == nullptr){
        return words;
    }
    
    for (auto pair : endOfWord.second->children){
        suffixHelper(words, partialWord, pair.second);
    }

    return words;
}
