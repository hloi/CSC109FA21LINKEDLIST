//
// Created by hloi on 10/5/2021.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    cout << "In LinkedList constructor" << endl;
    head = nullptr;
    tail = head;
    num_items = 0;
}

LinkedList::~LinkedList() {
    cout << "In LinkedList destructor" << endl;

    // The destructor deletes each node in the linked list
    while (head != nullptr) {
        LinkedListNode *next = head;
        head = head->getNext();
        delete next;
    }
    tail = head = nullptr;
    num_items = 0;
}

void LinkedList::push_front(int dataValue) {
    head = new LinkedListNode(dataValue, head);
    num_items++;
    if (num_items == 1) {
        tail = head;
    }
}

void LinkedList::push_back(int dataValue) {
    if (head == nullptr) {
        push_front(dataValue);
    } else {
        LinkedListNode *newNode = new LinkedListNode(dataValue);
        tail->setNext(newNode);
        tail = tail->getNext();
        num_items++;
    }
}

void LinkedList::insert(int dataValue, int pos) {
    if (pos == 0) {
        push_front(dataValue);
    }
    else if (pos >= num_items) {
        push_back(dataValue);
    }
    else {
        LinkedListNode* next = head;
        for (int i=0; i<pos-1; i++) {
            next = next->getNext();
        }
        // do we need special condition for head and tail
        // insert at position
        LinkedListNode *newNode = new LinkedListNode(dataValue, next->getNext());
        next->setNext(newNode);

    }
}

void LinkedList::print() const {
    LinkedListNode *next = head;
    while (next) {
        cout << next->getData() << endl;
        next = next->getNext();
    }
}

LinkedListNode *LinkedList::getHead() const {
    return head;
}

LinkedListNode *LinkedList::getTail() const {
    return tail;
}
