#include <iostream>

unsigned long long int silnia(unsigned long long int liczba);

int main(void)
{

using namespace std;

int liczba;

cout << "Enter integer: " << endl;

while(cin >> liczba)
{
	if(liczba == 0 || liczba == 1)
	cout << "!" << liczba << " = 1"  << endl;	
	else if (liczba < 0)
	cout << "Add a positive number or end with q" << endl;	
	else	
	cout << "!" << liczba << " = " << silnia(liczba)   << endl;

	cout << "Enter again integer or end with q" << endl;
}

return 0; 
}


unsigned long long int silnia(unsigned long long int liczba)
{

if(liczba > 1)
liczba = liczba*silnia(liczba-1);
else 
liczba = 1;

return liczba;	
}