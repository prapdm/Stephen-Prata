#include <iostream>

int main(void)
{

using namespace std;

int ilewierszy;

cout << "How many rows?" << endl;
cin >> ilewierszy;

char gwiazdki[ilewierszy];

for (int i = 0; i <= ilewierszy; ++i)
{
	gwiazdki[i] = '-';
}

 

for (int j = ilewierszy; j > 0; --j)
{
	gwiazdki[j] = '*';
	cout << gwiazdki << endl;
}


 


return 0;
}