#include "class80.h"
#include <iostream>

List::List()  //tworzy pustą liste
{
	top = 0;
}


bool List::isempty() const
{ 
	if(top == 0) return true;
	else return false;
}


bool List::isfull() const
{ 
	if(top == MAX) return true;
	else return false;
}


bool List::push(const Item & item)
{

	if(top < MAX)
	{
		items[top++] = item;
		return true;
	} else 
		return false;

}

bool List::pop()
{
	if(top > 0)
	{
		items[--top] = 0;
		return true;
	} else
		return false;	


}

int List::count() const
{
	return  top;

}

void List::printlist()  const
{
	using std::cout;
	using std::endl;

	for(int i = 0; i<top; ++i)
	{
	cout << "Item "<< i << ": " << items[i] << endl;
	}

}

void List::visit(void (*pf)(Item & item))
{
	
	for(int i = 0; i<top; ++i)
	{
	(*pf)(items[i]);
	}

}