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