//chroni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS60_H_
#define CLASS60_H_
 

class Plorog
{
	private:
		enum {MAX = 10} ; //stała zasięgu klasy
		char name[MAX]; // imie
		int ws; //wspolczynnik sytosci
 
	public:
		Plorog(const char * n = "Plorga", int x = 50); //Konstruktor domyslny
		void change(int x); //zmienia wspolczynnik sytosci
		void show() const;

};


#endif