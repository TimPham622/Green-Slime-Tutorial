#include "LinkedList.h"

LinkedList::LinkedList() {
    //Create an empty list
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
// Create a list from a C-array of length len
    this->head = nullptr;

    for (int i = 0; i < len; i++) {
        this->insertPosition(int pos, int newNum)
    }
}
LinkedList::~LinkedList(){
    Node* pointer = head;
    while (pointer != nullptr) {
            while (pointer != nullptr){
        Node* temp = pointer->get_link();
        delete pointer;
        pointer = temp;
    }
    }
};
void LinkedList::insertPosition(int pos, int newNum){
    //Insert a new node containing the number NewNUm into the pos Positoon
    // A pos of 1 or less places a new node at the front of the list.
    // A post that exceeds the size of the list should add the node at the end of the list

    
};
bool LinkedList::deletePosition(int pos){};
int LinkedList::get(int pos){};
int LinkedList::search(int target){};
void LinkedList::printList(){};