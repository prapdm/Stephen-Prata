#include <iostream>

struct informacje
{
	std::string firma;
	int srednica;
	float waga;
	
};

int main(void)
{

using namespace std;
informacje * pz = new informacje[3]; //alokujemy dynamicznie tablicę z 3 elementami
 
cout << "What is the company name?" << endl;
cin >> pz[0].firma;  
cout << "What is the diameter of a pizza?" << endl;
cin >> pz[0].srednica;  
cout << "What is the weight of a pizza?" << endl;
cin >> pz[0].waga;

cout << "OK, so company name is: " << pz->firma << ", diameter of pizza " << pz->srednica << " and weight of pizza is " << pz->waga << endl;
 
//zwolnienie pamięci
delete [] pz;


return 0;
}
	 