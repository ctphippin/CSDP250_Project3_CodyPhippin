#ifndef binarySTree_h
#define binarySTree_h
struct Node {
	int value;
	Node* leftNext;
	Node* rightNext;
	//constructor
	Node(int val) :value(val), leftNext(nullptr), rightNext(nullptr) {
	};
};
void preOrder(Node* root);
void inOrder(Node* root);
void postOrder(Node* root);
void collectGarbage(Node* nodes[], int size);
#endif 