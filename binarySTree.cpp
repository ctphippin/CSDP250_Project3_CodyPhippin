#include <iostream>
#include "binarySTree.h"
using namespace std;

// Pre order traverse
void preOrder(Node* root) {
    if (root) {
        cout << root->value << " ";
        preOrder(root->leftNext);
        preOrder(root->rightNext);
    }
}

// In order traverse
void inOrder(Node* root) {
    if (root) {
        inOrder(root->leftNext);
        cout << root->value << " ";
        inOrder(root->rightNext);
    }
}

// Post order traverse
void postOrder(Node* root) {
    if (root) {
        postOrder(root->leftNext);
        postOrder(root->rightNext);
        cout << root->value << " ";
    }
}

// get rid of left overs
void collectGarbage(Node* nodes[], int size) {
    for (int i = 0; i < size; ++i) {
        delete nodes[i];
    }
}
