#include <iostream>
#include <cstring>


int main(void)
{
	
	using namespace std;
	string imie, nazwisko;
	
	cout << "What is your name?" << endl;
	getline(cin, imie);
	cout << "What is your surname?" << endl;
	getline(cin,nazwisko);
	
	string full_name;
	full_name = imie + ", " + nazwisko; 
	cout << "Nazywasz się: " << full_name << endl;
 

 

return 0;
}