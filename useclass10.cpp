#include <iostream>
#include "class10.h"


int main()
{


	Bank klient("Jonh", "Kowalski", "74 5422 3325 1125 1145 1125");
	klient.show();
	klient.add(100);
	klient.show();
	klient.take(50);
	klient.show();
	klient.take(60);
	klient.show();



	return 0;
}