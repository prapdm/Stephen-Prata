#include <iostream>

struct batonik
{
	std::string marka;
	float waga;
	int kalorie;

};

 
int main(void)
{

using namespace std;
batonik * pz = new batonik [3]; //alokujemy dynamicznie tablicę z 3 elementami struktury 
 
// W przypadku tablic uzywamy kropki zamiast ->
cout << "What brand ?" << endl;
cin >> pz[0].marka;  
cout << "What weight?" << endl;
cin >> pz[0].waga;  
cout << "How many calories?" << endl;
cin >> pz[0].kalorie; 

cout << "OK, so brand is: " << pz[0].marka << ", weight is " << pz[0].waga << " and calories are " << pz[0].kalorie << endl;

//zwolnienie pamięci
delete [] pz;


return 0;
}
	