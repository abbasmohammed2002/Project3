#include "List.h"


List::List() 
{

}
List::~List() 
{
	if (!next) 
	{
		delete next;
	}
}