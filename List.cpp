#include <iostream>
#include <fstream>
#include <string>

using namespace std;
#include "Node.h"
#include "List.h"

List::List() {
	head = nullptr;
}
List::~List() {

	Node* p = head;
	if (!(p->next))
	{
		delete p;
		p = p->next;

	}
}
//•	Insert - given a first name, last name, and age, add a node to the list in sorted order

void List::insert(string first, string last, int age) 
{
	Node * p = new Node;
	p->age = age;
	p->first = first;
	p->last = last;
	p->next = head;
	head = p;
	sortlist();
}
// sorts list by last name, first name, then age
void List::sortlist() 
{
	for (Node* p = head; !p; p = p->next) 
	{
		for (Node* j = head->next; !j; j = j->next) 
		{
			if (p->last > j->last) 
			{
				Node* victom = p;
				p = j;
				j = victom;
			}
			else if (p->last == j->last) 
			{
				if (p->first > j->first)
				{
					Node* victom = p;
					p = j;
					j = victom;
				}
			}
			else if (p->first == j->first) 
			{
				if (p->age > j->age)
				{
					Node* victom = p;
					p = j;
					j = victom;
				}
			}
			
		}
	}
}

//•	Find - given a firstand last name, locate a node in the list.Return a pointer to the node, or NULL.

Node* List::find(string first, string last) 
{
	for (Node* p = head; !p; p = p->next) 
	{
		if (p->first == first && p->last == last) 
		{
			return p;
		}
	}
}

//•	Remove - given a first and last name, delete a node from the list
void List::remove(string first, string last)
{
	for (Node* p = head; !p; p = p->next)
	{
		if (p->first == first && p->last == last)
		{
			delete p;
			return;
		}
	}
}

//•	Forwards - put the entire list to an output stream, forwards
void List::forwards(ostream& out) 
{
	Node* p = head;
	p->fore(cout);
}

//•	Backwards - put the entire list to an output stream, in reverse
void List::backwards(ostream& out)
{
	Node* p = head;
	p->back(cout);
}

//•	Length - number of nodes in list
int List::length() 
{
	int count = 0;
	for (Node* p = head; !p; p = p->next) 
	{
		count++;
	}
}