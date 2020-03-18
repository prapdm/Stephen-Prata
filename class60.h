//chrzoni przed wielokrotnym włączeniem pliku nagłówkowego programu
#ifndef CLASS60_H_
#define CLASS60_H_

 


class Move
{
	private:
		double x;
		double y;
	public:
		Move(double a = 0, double b = 0); //ustawiana x na a oraz y na b
		void showmove() const;	//wyswietla biezace wartosci x i y
		Move add(const Move & m) const; //zwraca obiekt
		void reset(double a = 0, double b = 0);
 

};



#endif