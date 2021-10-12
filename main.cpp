#include <iostream>

#include "LinkedList.h"
#include "LinkedListNode.h"

int main() {
    // Create a linked list
    LinkedList* list = new LinkedList;
    for (int i = 1; i <= 5; ++i)
        list->push_front(i * 10);

    cout << "push back" << endl;
    for (int i = 1; i <= 5; ++i)
        list->push_back(i * 20);

    list->insert(200,4);
    list->print();
    // Free the linked list.
    // The LinkedList class destructor frees each node.
    int tmp = list->getHead()->getData();
    list->getHead()->setData(list->getTail()->getData());
    list->getTail()->setData(tmp);
    list->print();
    delete list;
//    list->print();
    return 0;
}
