//
// Created by hloi on 10/5/2021.
//

#ifndef CSC109FA21LINKEDLIST_LINKEDLISTNODE_H
#define CSC109FA21LINKEDLIST_LINKEDLISTNODE_H

#include <iostream>
using std::cout;
using std::endl;

class LinkedListNode {
public:
    LinkedListNode(int dataValue, LinkedListNode* next = nullptr) {
        cout << "In LinkedListNode constructor (" << dataValue << ")" << endl;
        data = dataValue;
    }

    ~LinkedListNode() {
        cout << "In LinkedListNode destructor (";
        cout << data << ")" << endl;
    }

    int getData() const;

    LinkedListNode* getNext();
    void setNext(LinkedListNode *next);

private:

    int data;
    LinkedListNode* next;




};


#endif //CSC109FA21LINKEDLIST_LINKEDLISTNODE_H
