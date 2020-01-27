//class10 - interfejst klasy 

//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS10_H_
#define CLASS10_H_

class Bank
{

	private:
		static const int LIMIT = 100;
		char imie[LIMIT];
		char nazwisko[LIMIT];
		char nrb[LIMIT];
		double saldo;
	public:
		Bank(); //Konstruktor domyslny
		Bank(const char * m_imie, const char * m_nazwisko, const char * m_nrb, double m_saldo = 0.0);
		void show() const;
		void add(double kwota);
		void take(double kwota);

};
#endif