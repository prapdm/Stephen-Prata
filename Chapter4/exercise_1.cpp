#include <iostream>


int main(void)
{
	
	using namespace std;
	char imie[30], nazwisko[30];
	short ocena,wiek;

	cout << "What is your name?" << endl;
	cin.get(imie,30).get(); //wczytanie wiersza i znaku nowego wiersza
	//cin >> imie;
	cout << "What is your surname?" << endl;
	cin.getline(nazwisko,30);
	//cin >> nazwisko;
	cout << "How do you rate from 1 to 6" << endl; 
	cin >> ocena;
	cout << "How old are you?" << endl;
	cin >> wiek;

	cout << "Your name is: " << imie << " "<< nazwisko << endl;
	cout << "Your score is: " << ocena-1 << endl;
	cout << "Age: " << wiek << endl;

 

return 0;
}