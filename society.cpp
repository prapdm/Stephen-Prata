//g++ -std=c++11  society.cpp
#include <iostream>
#include <cstring>

 
struct database {

char name[30];
long double amount;

};


int main(void)
{
using namespace std;

int sponsors;
cout << "How many sponsors?" << endl;
cin >> sponsors;
database * pd = new database[sponsors];

for (int i = 0; i < sponsors; ++i)
{
	
	cout << "Enter name of "<< i+1  << " sponsor" << endl;
	// Jeśli przed użyciem funkcji "getline" użyjemy obiektu "cin", ten ostatni pozostawia zwykle znak końca wiersza '\n' w buforze klawiatury. 
	//Funkcja "get" napotykając ten znak natychmiast kończy działanie, więc żeby uniknąć błędnego działania programu, należy wywołać funkcję cin.ignore().
	cin.ignore(); 
	cin.getline(pd[i].name,30); //chcemy wprowadzic puste imie
	cout << "Enter amount of "<< i+1  << " sponsor" << endl;
	cin >> pd[i].amount;


}


cout <<  pd[0].name << endl;

string wnames,names = "";
int wn,n = 0;

for (int i = 0; i < sponsors; ++i)
{

	if(pd[i].amount > 10000 && strlen(pd[i].name)> 0)
	{
		wnames +=  pd[i].name ;
		wnames +=  " ";
		++wn;

	} else if(pd[i].amount > 10000 )
	{

		wnames += "empty ";
		++wn;

	} else if (strlen(pd[i].name)> 0)
	{
		names +=  pd[i].name ;
		names +=  " ";
		++n;

	} else
	{
		names +=  "empty ";
		++n;
	}


}

if(wn>0)
cout << "Our wonderful sponsors: "<< wnames  << endl;

if(n>0)
cout << "Our sponsors: "<< names  << endl;



return 0;
}