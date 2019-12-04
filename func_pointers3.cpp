#include <iostream>

//stałe
const short LEN = 30;
int n = 1;
int * pn = &n; 

//prtotypy
void show(char * p_imie, int n = 1);

int main(void)  
{

using namespace std;
char * p_imie = new char[LEN];
cout << "Enter your name or enter q" << endl; 


while(cin >> p_imie)
{

 		
 
	if( p_imie[0] == 'q' || p_imie[0] == 'Q') break;
 	 
	if(*pn > 1)
	show(p_imie,*pn); 
    else 
    show(p_imie);
 
		
	cout << "Enter your name:" << endl;

}

delete [] p_imie;
 

}


void show(char * p_imie, int n )
{
	using namespace std;
 
 	for(int i = 0; i < n; ++i)
 	{

 		cout << "Your name is: " << p_imie << endl;

 	}
	 
	*pn = n+1 ;
 
} 