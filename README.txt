Binary Tree Traversal program
#Purpose: 
The program will create and traverse a binary tree where each node has a leftNext and RightNext pointer
It generates between 35 and 100 random natural numbers
Each number is wrapped in a node structure with 2 pointers (leftNext and rightNext)
The program shows the Pre-order, in-order, and post-order traversal

#Files included:
binarySTree.cpp: holds the implementation for the functions declared in binarySTree.h

binaryStree.h: contains the structure definition for the binary tree node and function definitions
(preorder, inorder, postorder traversal, and the memory cleanup at the end)

main.cpp: The main program logic, generates 35 to 100 random numbers
creates nodes and connects them into the shape of a binary tree, then calls traversal functions
output the results then cleanup memory after done

README.txt: this file explains the purpose, file structure, and details how to execute the program

#Procedure: 
Download the program files and open them with a C++ compiler, then run the program using the compiler
The output will be sent to the terminal

Output:
Generated 36 numbers: 42 54 98 68 63 83 94 55 35 12 63 30 17 97 62 96 26 63 76 91 19 52 42 55 95 8 97 6 18 96 3 46 21 55 88 27
Pre order traversal: 42 54 68 55 96 46 21 26 55 88 35 63 27 76 63 12 91 19 63 52 42 98 83 30 55 95 17 8 97 94 97 6 18 62 96 3
In order traversal: 46 96 21 55 55 26 88 68 27 63 35 76 54 91 12 19 63 52 63 42 42 55 30 95 83 8 17 97 98 6 97 18 94 96 62 3
Post order traversal: 46 21 96 55 88 26 55 27 63 76 35 68 91 19 12 52 42 63 63 54 55 95 30 8 97 17 83 6 18 97 96 3 62 94 98 42
