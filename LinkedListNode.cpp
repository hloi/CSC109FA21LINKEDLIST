//
// Created by hloi on 10/5/2021.
//
#include <iostream>

#include "LinkedListNode.h"
using namespace std;



int LinkedListNode::getData() const {
    return data;
}

LinkedListNode *LinkedListNode::getNext() {
    return next;
}

void LinkedListNode::setNext(LinkedListNode *next) {
    this->next = next;
}
