#include <iostream>
#include "exercise_2.h"


int main()
{

	using std::cout;
	using std::endl;


	Person one;
	Person two("Staszek");
	Person three("Jacek", "Placek");
	cout << "one.show()" << endl;
	one.show();
	cout << "one.formalshow()" << endl;
	one.formalshow();
	cout << "two.show()" << endl;
	two.show();
	cout << "two.formalshow()" << endl;
	two.formalshow();
	cout << "three.show()" << endl;
	three.show();
	cout << "three.formalshow()" << endl;
	three.formalshow(); 



	return 0;
}