#include <iostream>
#include <cstring>
#include "golf.h"
 

int main()
{
	
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "How many player do you want add?" << endl;
	int len;
	cin >> len;
	

	golf * pg = new golf[len];

	int st;

	for (int i = 0; i < len; ++i)
	{
 	 
		st = setgolf(pg[i]);
		if(st) break;

		cin.clear();
		//pobierz pozostale znaki az do napotkania znaku nowej lini
		while (cin.get() != '\n') continue;
		++st;
	}

	cout << "You entered: \n" << endl;

	for (int i = 0; i <= st; ++i)
	{
		cout << "Player " << i <<": "<< endl;
		showgolf(pg[i]);
	}


	cout << "\nEnter number of player to modify handicap or type c to continue: " ;
	int mod;	

	while(cin >> mod)
	{

		cout << "Enter new handicap: " << endl;;
 
		int newh;
		cin >> newh;
		handicap(pg[mod],newh);

 		cout << endl;
		cout << "Enter number of player to modify handicap or type c to continue: " ;
	 

	}

	//wyczusc kod bledu - wprowadzono "c" zamiast int
	cin.clear();
	while (cin.get() != '\n') continue;
	
	cout << "\nBefore you go, would you like to modify player? (y or n): ";
	

	char ch[Len];
	int handicap;

	while(cin >> ch && ch[0] != 'n'  )
	{
		 

	 	cout <<  endl;
		cout << "Enter number of player to modify player or q to exit: " ;
		
		while(cin >> mod)
		{

			cout << "Enter new handicap: ";
			cin >> handicap;
			cin.clear();
			while (cin.get() != '\n') continue;	
			setgolf(pg[mod], ch, handicap);

			cout << "\nModification complete" << endl ;

			for (int i = 0; i <= st; ++i)
			{
				cout << "Player " << i <<": "<< endl;
				showgolf(pg[i]);
			}

			cout <<  endl;
			cout << "Enter number of player to modify player or q to exit: " ;
 
		}

	
	}

	cout << "Bye, bye " << endl;
 
	return 0;
}


void setgolf(golf & g, const char * name, int hc)
{	 
	using std::cout;
	g.handicap = hc;
 
}


void handicap(golf & g, int hc)
{

	g.handicap = hc;
	showgolf(g);

}

void showgolf(const golf & g)
{
	using std::cout;
	using std::cin;
	using std::endl;

	cout << "------------" << endl;
	cout << "Fullname: "<< g.fullname << endl;
	cout << "Handicap: " << g.handicap << endl;
	cout << "------------" << endl;

}


//zapisz do struktury
int setgolf(golf & g)
{

	using std::cout;
	using std::cin;
	using std::endl;
	
	char name[40];

	cout << "What is your name? " << endl;
	cin >> name;
	//Jesli wprowadzono puste imie przerwij petle
	if( name[0] == '\n') return 1;
 
	strcpy(g.fullname,name);

	cout << "What is your handicap? " << endl;
	cin >> g.handicap;

	return 0;

}
 