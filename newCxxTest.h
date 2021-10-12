/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newCxxTest.h
 * Author: hloi
 *
 * Created on January 26, 2018, 3:52 PM
 */

#ifndef NEWCXXTEST_H
#define NEWCXXTEST_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
//#include "myClass.h"
#include "LinkedListNode.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testLinkedListNode() {
        //Use TS_ASSERT_EQUALS(Result, ExpResult) to test your functions. 
        LinkedListNode* node1 = new LinkedListNode(10);
        TS_ASSERT_EQUALS(10, node1->getData());
        LinkedListNode* node2 = new LinkedListNode(20);
        TS_ASSERT_EQUALS(20, node2->getData());
        node1->setNext(node2);
        LinkedListNode* tmp = node1->getNext();
        TS_ASSERT_EQUALS(20, tmp->getData());
        tmp->setData(30);
        TS_ASSERT_EQUALS(30, tmp->getData());
        delete node1;
        delete node2;
    }
};
#endif /* NEWCXXTEST_H */

