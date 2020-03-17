//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS50_H_
#define CLASS50_H_
 

struct customer {
	char fullname[35];
	double payment;
};

typedef customer Item;


class Stack
{
	private:
		enum {MAX = 10} ; //stała zasięgu klasy
		Item items[MAX]; //przechowuje elementy stosu
		int top;		//indeks szczytowego stosu
		double total; //suma calkowita 
	public:
		Stack(); //Konstruktor domyslny
		bool isempty() const; //sprawdza czy stos pusty
		bool isfull() const; //sprawdza czy stos pełny
		bool push(const Item & item); //zwraca false jesli stos jest juz pelen (true w pozostalych przypadkach)
		bool pop(Item & item); //zwraca false jestli stos jst juz pusty (true w pozostalych przypadkach)
		double sum() const; //zwraca sume

};


#endif