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
//    while (head != nullptr) {
//        LinkedListNode* next = head;
//        head->setNext(head->getNext());
//        delete next;
//    }

    for (int i=0; i<num_items; i++) {
        LinkedListNode* next = head;
        head = head->getNext();
        delete next;
    }
    tail = head = nullptr;
    num_items = 0;
}

void LinkedList::push_front(int dataValue) {
    LinkedListNode* newNode = new LinkedListNode(dataValue);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        newNode->setNext(head);
        head = newNode;
    }
    num_items++;
}

void LinkedList::push_back(int dataValue) {
    // when tail = nullptr or head = nullptr
    LinkedListNode *newNode = new LinkedListNode(dataValue);
    if (tail == nullptr) {
        tail = newNode;
        head = tail;
    } else {
        tail->setNext(newNode);
        tail = tail->getNext();
    }
    num_items++;
}

void LinkedList::insert(int dataValue, int pos) {
    LinkedListNode* next = head;
    if (pos < num_items) {
        for (int i=0; i<pos; i++) {
            next = next->getNext();
        }
        // do we need special condition for head and tail
        // insert at position
        LinkedListNode *newNode = new LinkedListNode(dataValue);
        newNode->setNext(next->getNext());
        next->setNext(newNode);
    }
}
