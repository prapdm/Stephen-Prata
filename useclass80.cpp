#include "class80.h"
#include <iostream>

//prototypy funkcji
void addone(double & x); //x+1
void minusone(double & x); //x-1
void square(double & x); //x*x

int main()
{
	using std::cout;
	using std::endl;

	List l;

	cout<< "Is empty? " << l.isfull() << endl;
 	cout<< "Adding element "  << endl;
 	l.push(20);
 	cout << "Is full? " << l.isfull() << endl;
 	cout << "Elements: "    << endl;
 	l.printlist();
 	cout<< "Adding element " << l.isfull() << endl;
 	l.push(20);
 	cout<< "Elements stored: " << l.count() << endl;
 	l.printlist();
 	cout<< "Lets square: "  << endl;
 	l.visit(square);
 	l.printlist();
 	cout<< "Add one to each item: "  << endl;
 	l.visit(addone);
 	l.printlist();
	cout<< "Minus one to each item: "  << endl;
 	l.visit(minusone);
 	l.printlist();
 	cout<< "Remove element " << endl;
 	l.pop();
 	l.printlist();

	return 0;
}


void square(double & x)
{
x=x*x;
}

void addone(double & x)
{
x=x+1;
}

void minusone(double & x)
{
x=x-1;
}