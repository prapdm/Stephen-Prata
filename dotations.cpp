//g++ -std=c++11  dotations.cpp
#include <iostream>
#include <array>
#include <cctype>
#include <cstring>


int main(void)
{
	using namespace std;
	const int ilosc = 10;

 
	array<double,ilosc> dadki;
	char ch;
	double suma = 0;
	 ;

	cout << "We collect donations please give as much as you can" << endl;

	for (int i = 0; i < dadki.size(); ++i)
	{
		cout << "Dotation no " << i+1 << ":" << endl;
 
	 	//Jeśli not true wejdz do srodka, w przeciwnym razie nic nie rob.
		while(!(cin >> dadki[i]))
		{
			//skoro nie mozna zapisac do tablicy liczby to przerwij program
			exit(0); 
		}
	 
		suma += dadki[i];
	}

	


	cout << "Average is: " << (suma)/dadki.size() << endl;
	for (int i = 0; i < dadki.size(); ++i)
	{
		if(dadki[i] > ((suma)/dadki.size()))
			cout << "Dotation no " << i+1 << " is bigger than average" << endl;

	}



return 0;
} 