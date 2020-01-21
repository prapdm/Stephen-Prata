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
int fill_struct(batonik * pb, int n); 
void show(const batonik  & rb );
 

int main(void)
{
using namespace std; 
cout << "How many products do you want enter: " ;
int data_size;
cin >> data_size;

batonik * pb = new batonik[data_size+1];
int entered = fill_struct(pb, data_size);

 

for(int i = 0; i < entered+1 ; i++)
{
show(pb[i]);
}

 
delete [] pb;

cout << "Ready "  << endl;
return 0;
}

int fill_struct(batonik * pb, int n)
{
	using namespace std; 
	int i;
	char ch;
 

	for(i = 0; i < n; i++ )
	{
 
		cout << "Data " << i+1 << ": " << endl;
		cout << "Mark: "<< endl  ;
		cin >> pb[i].marka;
		cout << "Weight: " << endl ;
		cin >> pb[i].waga;
		cout << "Kalorie: "<< endl  ;
		cin >> pb[i].kalorie;

	}

return i;


}


 
void show(const batonik & rb )
{
	using namespace std;

	cout << "Mark: " << rb.marka << endl;
	cout << "Weight: " << rb.waga << endl;
	cout << "Kalorie: " << rb.kalorie << endl;

}