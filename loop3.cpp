#include <iostream>
 

int main(void)
{

using namespace std;
int liczba,suma,b = 0;

cout << "Please enter the numbers and I will sum them up. If you have enough, write zero." << endl;

do
{
	cin >> liczba;
	suma += liczba; 
 

}while (liczba != 0);  

cout << "Ok, great! So te sum is: " << suma << endl;

return 0;
}
	 