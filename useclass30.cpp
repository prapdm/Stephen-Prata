#include <iostream>
#include "class30.h"

const int maxplayers = 10;

int main()
{

	using std::cout;
	using std::cin;
	using std::endl;

	int players;
	cout << "How many player do you want add?" << endl;
	cin >> players;

	//alokujemy dynamicznie tablicę obiektów
	Golf * PlayersArray = new Golf[players];

	if(players < maxplayers)
	{

		//Inicialize players 
		for(int i=0; i<players; ++i)
	 	{	
	 		PlayersArray[i].setgolf();
	 	}

		//Show players 
		for(int i=0; i<players; ++i)
		{
			cout << "\nPlayer " << i << endl;
			PlayersArray[i].showgolf();		
		}	

		//Edit players 
		cout << "\nEnter number of player to modify handicap or type c to continue: " ;
		int mod;	

		while(cin >> mod)
		{
			PlayersArray[mod].sethandicap();

			//Show players 
			for(int i=0; i<players; ++i)
			{
				cout << "\nPlayer " << i << endl;
				PlayersArray[i].showgolf();		
			}	

			cout <<  endl;
			cout << "Enter number of player to modify player or type c to continue: " ;

		}

 
		//Change to custom player and check how works - *this
		Golf customplayer("Pablo", 100);
		PlayersArray[0].change(customplayer);

		//Show players 
			for(int i=0; i<players; ++i)
			{
				cout << "\nPlayer " << i << endl;
				PlayersArray[i].showgolf();		
			}	


	} else

	cout << "Sorry, but limit of players is 10" << endl;
	


 
 
 
	delete[] PlayersArray;

	return 0;
}