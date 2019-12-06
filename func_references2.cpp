#include <iostream>

//stale
const short LEN = 50;

struct batonik 
{
	char marka[LEN];
	double waga;
	int kalorie;

};

//prototypy
void show(const batonik  & rb );
void set_values(batonik & rb, const char * m = "Milleniumm Munch", const double waga = 2.85, const int kalorie = 350);

 

int main(void)
{
 
using namespace std; 	
 
 
batonik rb;

cout << "Mark: " << endl;
cin  >> rb.marka ;
cout << "Weight: " << endl;
cin  >> rb.waga ;
cout << "Kalorie: " << endl;
cin  >> rb.kalorie ;


show(rb);
set_values(rb);
show(rb);
  

 
return 0; 
}

 


void set_values(batonik & rb, const char * m , const double waga , const int kalorie )
{
	using namespace std; 

	for (int i = 0; m[i] != '\0'; i++){
    rb.marka[i]  = m[i];
	}

	cout << "R: "<< rb.marka << endl;
	rb.waga  = waga;
	rb.kalorie  = kalorie;

}

void show(const batonik & rb )
{
	using namespace std;

	cout << "Mark: " << rb.marka << endl;
	cout << "Weight: " << rb.waga << endl;
	cout << "Kalorie: " << rb.kalorie << endl;

}