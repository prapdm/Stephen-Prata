#include <iostream>
#include <cstring>


int main(void)
{
	
	using namespace std;
	char imie[20], nazwisko[20];
	
	cout << "What is your name?" << endl;
	cin.getline(imie,20);
	cout << "What is your surname?" << endl;
	cin.getline(nazwisko,20);
	
	char full_name[40];
	strcpy( full_name, imie );
    strcat( full_name, ", " );
    strcat( full_name, nazwisko );
	cout << "Nazywasz się: " << full_name << endl;
 

 

return 0;
}