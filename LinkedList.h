//
// Created by hloi on 10/5/2021.
//

#ifndef CSC109FA21LINKEDLIST_LINKEDLIST_H
#define CSC109FA21LINKEDLIST_LINKEDLIST_H
#include "LinkedListNode.h"
#include <iostream>
using namespace std;

class LinkedList {
public:
    LinkedList();
    virtual ~LinkedList();
    void push_front(int dataValue);
    void push_back(int dataValue);
    void insert(int dataValue, int pos);
    void print() const;
    LinkedListNode *getHead() const;
    LinkedListNode *getTail() const;

private:
    LinkedListNode* head;
    LinkedListNode* tail;
    int num_items;
};


#endif //CSC109FA21LINKEDLIST_LINKEDLIST_H
