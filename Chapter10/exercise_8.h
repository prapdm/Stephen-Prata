//chroni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS80_H_
#define CLASS80_H_
 

 
typedef double Item;


class List
{
	private:
		enum {MAX = 10} ; //stała zasięgu klasy
		Item items[MAX]; //przechowuje elementy listy
		int top;		//indeks szczytowego indexu
	public:
		List(); //Konstruktor domyslny
		bool isempty() const; //sprawdza czy stos pusty
		bool isfull() const; //sprawdza czy stos pełny
		bool push(const Item & item); //zwraca false jesli stos jest juz pelen (true w pozostalych przypadkach)
		bool pop(); //zwraca false jestli stos jst juz pusty (true w pozostalych przypadkach)
		int count() const; //zwraca liczbe elementow
		void visit(void  (*pf)( Item & item)); // jako argument pzyjmujemy wskaźnik  funkcji realizującej operacje na elemencie
		void printlist() const; // pokaz elementy listy
		 

};


#endif