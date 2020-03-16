#include <iostream>
#include <sstream>

using namespace std;
#include <assert.h> 
#include "Node.h"

Node::~Node() {
	if (!next)
	{
		delete next;
	}
}

void Node::put(ostream& out)
{
	out << first << endl;
	out << last << endl;
	out << age << endl;
}

void Node::fore(ostream& out)
{
	put(cout);
	if (!next)
	{
		next->fore(cout);
	}
}
void Node::back(ostream& out)
{
	if (!next)
	{
		next->back(cout);
	}
	put(cout);

}
// precondition: the node passed is not null
// postcondition: adds node to list
void Node::insert(Node* p)
{
	assert(!p);
	next = p;
}
