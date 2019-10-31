#include <iostream>
 

const int y  = 3;
const int m  = 12;
const std::string miesiace[m] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main(void)
{


using namespace std;

int sprzedaz,sum  = 0;
string wyniki[y][m];


cout << "Tell us how many books did you sell in last 3 years" << endl;

for (int i = 1;  i <= y; ++i)
{
	for (int j = 1;  j <= m; ++j)
	{
	cout << "Year " << i << ", "<< miesiace[j-1] << ": " ;  // j-1 poniwaz miesiace[0] = January;
	cin >> sprzedaz ;
	sum += sprzedaz;
	 
	}
 
}

cout << "So you sold " << sum << " books. Nice ;)"  << endl;

return 0;
}  