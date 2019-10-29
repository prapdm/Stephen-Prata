#include <iostream>

int main(void)
{
	
	using namespace std;
	char imie[15], nazwisko[20];
	short ocena,wiek;

	cout << "What is your name?" << endl;
	//cin.getline(imie,15); 
	//lub
	cin.get(imie,15).get(); //wczytanie wiersza i znaku nowego wiersza
	cout << "What is your surname?" << endl;
	cin.getline(nazwisko,20);
	cout << "How do you rate from 1 to 6" << endl;
	cin >> ocena;
	cout << "How old are you?" << endl;
	cin >> wiek;

	cout << "Nazywasz się: " << imie << " "<< nazwisko << endl;
	cout << "Twoje ocena to: " << ocena-1 << endl;
	cout << "Wiek: " << wiek << endl;





return 0;
}