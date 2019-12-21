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
batonik snack =  {
	"Mocha Munch", 
	2.3, 
	350
};
 

cout << "OK, so brand is: " << snack.marka << ", weight is " << snack.waga << " and calories are " << snack.kalorie << endl;




return 0;
}
	