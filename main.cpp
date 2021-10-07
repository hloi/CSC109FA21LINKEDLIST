#include <iostream>

#include "LinkedList.h"

int main() {
    // Create a linked list
    LinkedList* list = new LinkedList;
    for (int i = 1; i <= 5; ++i)
        list->push_front(i * 10);

    for (int i = 1; i <= 5; ++i)
        list->push_back(i * 20);

    // Free the linked list.
    // The LinkedList class destructor frees each node.
    delete list;

    return 0;
}
