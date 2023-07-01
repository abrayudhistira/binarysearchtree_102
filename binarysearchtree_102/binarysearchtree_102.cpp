// binarysearchtree_102.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class Node		// class node
{
public:
	string info;
	Node* leftchild;		//membuat node leftchild
	Node* rightchild;		//membuat node rightchild

	// constuctor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree		//class binarytree
{
public:
	Node* ROOT;		//node root

	BinaryTree()
	{
		ROOT = NULL; // initializing ROOT to NULL
	}

	void insert(string element) // insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); // allocate memory for the new node
		newNode->info = element; //assign value to data field of the new node
		newNode->leftchild = NULL; //make the left child of the new node point to NULL
	}
};