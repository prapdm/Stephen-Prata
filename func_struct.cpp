#include <iostream>

struct box
{

	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;

};

//prototypy funkcji
void showbox (box dane); //przekazujemy wartosci
void showbox2 (box * pb); //uzyjemy wskaźnika i przekazemy tylko adres struktury



int main(void)
{

using namespace std;
box dane = {
"3M",
4.5,
2.6,
6.6,
0
};

cout << "Runing showbox()" << endl;
showbox(dane);

 
cout << "Runing showbox2()" << endl;
showbox2(&dane);

cout << "Runing again showbox()" << endl;
showbox(dane);

return 0;
}


void showbox (box dane)
{
	using namespace std;
	cout << "Manufacturer: " << dane.producent << endl;
	cout << "High: " << dane.wysokosc << endl;
	cout << "Width: " << dane.szerokosc << endl;
	cout << "Length: " << dane.dlugosc << endl;
	cout << "Capacity: " << dane.objetosc << endl;


} 

void showbox2 (box * pb)
{
	pb->objetosc = pb->wysokosc*pb->dlugosc*pb->szerokosc;
} 