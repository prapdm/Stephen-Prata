#include <iostream>
#include <cstring>
#include "class10.h"

//konstruktor domyślny
Bank::Bank()
{

	strcpy(imie, "Janusz");
	strcpy(nazwisko, "Kowalski");
	strcpy(nrb, "00 0000 0000 0000 0000 0000");
	saldo = 0.0;

}

Bank::Bank(const char * m_imie, const char * m_nazwisko, const char * m_nrb, double m_saldo)
{

	strcpy(imie, m_imie); 
	strcpy(nazwisko, m_nazwisko); 
	strcpy(nrb, m_nrb); 
	saldo = m_saldo;

}

void Bank::show() const
{
	using std::cout;
	using std::endl;

	cout << "Name: "<< imie <<endl;
	cout << "Surname: "<< nazwisko <<endl;
	cout << "Account number: "<< nrb <<endl;
	cout << "Account balance: "<< saldo <<endl;

}

void Bank::add(double kwota)
{
	using std::cout;
	using std::endl;

	saldo+= kwota;
	cout << "Adding: +"<< saldo <<endl;
	 
}

void Bank::take(double kwota)
{
	using std::cout;
	using std::endl;


	if(saldo > 0 && kwota < saldo)
	{

		cout << "Taking out: -"<< kwota <<endl;
		saldo-= kwota;
 

	} else
		cout << "You don't have enough money "<< saldo <<endl;

}