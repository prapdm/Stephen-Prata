//g++ -std=c++11  monastery.cpp
#include <iostream>

 
const short elements = 5;
const short strsize = 20; 
void showmenu();


struct zpdw {

	char name[strsize];
	char position[strsize];
	char nickname[strsize];
	int preferences;
};

int main(void)
{ 
	using namespace std;
	
	zpdw database[elements] = 
	{

		{"Alex","Java Programer","Star",1},
		{"Paul","Junior Programer","Ali",2},
		{"Stehpan","Senior Programer","Pablo",3},
		{"Steve","Python Programer","Prata",2},
		{"Alice","Tester","Baby",1},

	};
 
	
	char choice;
	cout << "Welcome in goodwill programmers monastery. Choose options:" << endl;	
	showmenu();
	cin >> choice;


	while(choice != 'q')
	{	
		switch(choice)
		{ 
			case 'a': 
			case 'A': 
			for (int i = 0; i < elements; ++i) cout << database[i].name << endl; 
			break;

			case 'b': 
			case 'B': 
			for (int i = 0; i < elements; ++i) cout << database[i].position << endl; 
			break;

			case 'c': 
			case 'C': 
			for (int i = 0; i < elements; ++i) cout << database[i].nickname << endl; 
			break;
			
			case 'd': 
			case 'D': 
			for (int i = 0; i < elements; ++i) 
				{
				 	switch(database[i].preferences)
				 	{
				 		case 1: cout << database[i].name << endl; break;
				 		case 2: cout << database[i].position << endl; break;
				 		case 3: cout << database[i].nickname << endl; break;
				 	 

				 	}  

				}
			break;



			default: cout << "Bad option selected!" << endl;
		} 	
		
		cin.clear();
		while (cin.get() != '\n') continue;
		showmenu();
		cin >> choice;

		
	}	

return 0;
}


void showmenu(void)
{
	using namespace std;
	
	cout << "a. List by names\tb. List by position" << endl;
	cout << "c. List by nicknames\td. List by preferences" << endl;
	cout << "q. quit" << endl;

}

 