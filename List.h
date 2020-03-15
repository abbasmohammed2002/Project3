#pragma once
#include <iostream>
#include "Node.h"
using namespace std;
class List
{
	List(); // default constructor
	~List(); // deletes all nodes from the list
	void insert(string first, string last, int age); // insert a node into the list
	Node find(string first, string last);  // find a person (node) in list
	void remove(string first, string last); // remove a node/item from list
	void forwards(ostream& out); // print list forwards
	void backwards(ostream& out); // print list backwards
	int length(); // returns number of nodes in list 
};

