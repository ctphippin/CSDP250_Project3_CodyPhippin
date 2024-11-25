// CSDP250_Project3_CodyPhippin.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Cody Phippin
// 1342777
// Project 3
// CSDP 250

#include <cstdlib>
#include <iostream>
#include "binarySTree.h"
using namespace std;
int main()
{
    srand(time(0)); // it kept generating the same number every run, internet search said I have to "seed" the value
    const int MIN = 35;
    const int MAX = 100;
    int size = MIN + (rand() % (MAX - MIN));
    int numbers[100];

    // creates a random number less than 100 for each node
    for (int i = 0; i < size; i++) {
        numbers[i] = rand() % 100;
    }
    
    // print out the created numbers
    cout << "Generated " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    Node* nodes[100];
    for (int i = 0; i < size; i++) {
        nodes[i] = new Node(numbers[i]);
    }
    // make tree using leftnext and rightnext
    for (int i = 0; i < size; i++) {
        if (2 * i + 1 < size) {
            nodes[i]->leftNext = nodes[2 * i + 1];
        }

        if (2 * i + 2 < size) {
            nodes[i]->rightNext = nodes[2 * i + 2];
        }
    }
    // output the tree the traversals
    cout << "Pre order traversal: ";
    preOrder(nodes[0]);
    cout << endl;

    cout << "In order traversal: ";
    inOrder(nodes[0]);
    cout << endl;

    cout << "Post order traversal: ";
    postOrder(nodes[0]);
    cout << endl;

    // get rid of left over memory space
    collectGarbage(nodes, size);
    return 0;
}
