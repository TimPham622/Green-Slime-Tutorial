#include "PrefixMatcher.h"

RouterNode::RouterNode(char letter){
    this->letter = letter;
}

PrefixMatcher::PrefixMatcher(){
    this->start = new RouterNode(' ');
}

PrefixMatcher::~PrefixMatcher(){
    deleteChildren(start);
}

void PrefixMatcher::deleteChildren(RouterNode* node){
    for (auto child : node->children){
        deleteChildren(child.second);
    }
    delete node;
}

void PrefixMatcher::insert(string address, int routerNumber){
    RouterNode* currentNode = start;

    for (int i = 0; i < (int)address.length(); i++){
        if (currentNode->children[address[i]] == nullptr){
            currentNode->children[address[i]] = new RouterNode(address[i]);
        }

        currentNode = currentNode->children[address[i]];
    }
    currentNode->routerNumber = routerNumber;
}

int PrefixMatcher::selectRouter(string networkAddress){
    int bestResult = -1;
    
    RouterNode* currentNode = start;
    
    for (int i = 0; i < (int)networkAddress.length(); i++){
        if (currentNode->children[networkAddress[i]] == nullptr){
            return bestResult;
        }
        currentNode = currentNode->children[networkAddress[i]];

        if (currentNode->routerNumber != -1) bestResult = currentNode->routerNumber;
    }
    
    return bestResult; 
}