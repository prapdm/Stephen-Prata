#include <iostream>
#include "class60.h"

int main()
{

	using std::cout;
	using std::endl;

	Move a;

	Move b(5,5);
	Move c = a.add(b);

	a.showmove();
	b.showmove();
	c.showmove();

	c.reset(10,10);
	c.showmove();

	return 0;
}