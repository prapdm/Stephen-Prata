#include <iostream>

int main(void)
{
using namespace std;

float stopnie, minuty, sekundy, wynik;
// 60 sekund to jedna minuta
// 1 stopien to 60 minut
const short niceconst = 60;


cout << "Enter the length in degrees, minutes and seconds:" << endl;
cout << "First in degrees:" << endl;
cin >> stopnie;
cout << "Then in minutes:" << endl;
cin >> minuty;
cout << "At the end in seconds:" << endl;
cin >> sekundy;

//sekundy na minuty
wynik = sekundy/niceconst;
//sumujemy minuty
wynik = wynik + minuty;
//minuty na stopnie
wynik = wynik/niceconst;
//sumujemy stopnie
wynik = wynik+stopnie;

cout << stopnie << " degrees, "<< minuty << " minutes, " << sekundy << " seconds = " << wynik << " degrees" <<  endl;






return 0; 
}