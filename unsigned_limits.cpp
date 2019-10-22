//limity liczb calkowitych
#include <iostream>
#include <climits> //zawiera informacje o ograniczeniach typow calkowitoliczbowych

int main()
{
using namespace std;

unsigned int max_int = UINT_MAX;
unsigned short max_short = USHRT_MAX;
unsigned long max_long= ULONG_MAX;
unsigned long long max_llong = ULLONG_MAX;

unsigned int min_int = 0 ;
unsigned short min_short = 0;
unsigned long min_long = 0;
unsigned long long min_llong = 0;


cout << "int ma " << sizeof(max_int) << " bajty" << endl;
cout << "short ma " << sizeof(max_short) << " bajty" << endl;
cout << "long ma " << sizeof(max_long) << " bajty" << endl;
cout << "long long ma " << sizeof(max_llong) << " bajty" << endl;
cout  << endl;

cout << "Wartośći maksymalne:" << endl;
cout << "int: " << max_int << endl;
cout << "short: " << max_short << endl;
cout << "long: " << max_long << endl;
cout << "long long: " << max_llong << endl;
cout  << endl;

cout << "Wartośći minimalne:" << endl;
cout << "int: " << min_int << endl;
cout << "short: " << min_short << endl;
cout << "long: " << min_long << endl;
cout << "long long: " << min_llong << endl;
cout  << endl;

cout << "Bitów na bajt:" << CHAR_BIT <<  endl;
cout << endl;
cout << "Sprawdźmy co się stanie gdy dodamy 1 do int" << endl;
cout << "Wynik działania: " << max_int+1 << endl; 
cout << "Sprawdźmy co się stanie gdy od min_int odejmiemy 1" << endl;
cout << "Wynik działania: " << min_int-1 << endl;
cout << "Wniosek? Liczby całkowite zachowują się jak licznik kilometrów w samochodzie - jeśli przekroczy jego zakres wartości zaczynają się powtarzać od początku" << endl;

return 0;
}
