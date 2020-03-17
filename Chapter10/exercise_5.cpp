#include "exercise_5.h"

Stack::Stack()  //tworzy pusty stos
{
	top = 0;
	total = 0;
}


bool Stack::isempty() const
{ 
	if(top == 0) return true;
	else return false;
}


bool Stack::isfull() const
{ 
	if(top == MAX) return true;
	else return false;
}


bool Stack::push(const Item & item)
{

	if(top < MAX)
	{
		items[top++] = item;
		total+=item.payment;
		return true;
	} else 
		return false;

}

bool Stack::pop(Item & item)
{
	if(top > 0)
	{
		items[--top] = item;
		total-=item.payment;
		return true;
	} else
		return false;	


}

double Stack::sum() const
{
	return  total;

}