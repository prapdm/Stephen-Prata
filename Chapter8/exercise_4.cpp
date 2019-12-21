#include <iostream>
#include <cstring>

using namespace std;


struct dane {
char * str;
int ct;
};

//prtotypy
void show( const char * s, int howmany = 1);
void show( const dane rs, int howmany = 1);
void set (dane & rs , char * s);


int main(void)
{

dane beany;
char testing[] = "Some great text is now making";

set(beany,testing);
cout << "Runing show(beany)" << endl;
show(beany);
cout << "Runing show(beany,2)" << endl;
show(beany,2);
cout << "Modifing testing[0] = 'D' testing[1] = 'u' " << endl;
testing[0] = 'D';
testing[1] = 'u';
cout << "Runing show(testing)" << endl;
show(testing);
cout << "Runing show(testing,3)" << endl;
show(testing,3);
show("Ready ;)");



return 0;
}


void set (dane & rs ,  char * s)
{

int dlugosc;
dlugosc = strlen(s);
//zaalokuj pamiec dla lancucha
char * newone = new char[dlugosc];
//skopiuj lancuch do newone
strcpy(newone,s);
//przypisz do struktury
rs.str = newone;
rs.ct = dlugosc;

}


void show( const char * s, int howmany )
{

	if(howmany == 1)
		cout << s << endl;
	else
	{
		for(int i = 0; i < howmany; ++i)
		{
			cout << s << endl;
		}


	}
}

void show( const dane rs, int howmany )
{


	if(howmany == 1)
		cout << rs.str << endl;
	else
	{
		for(int i = 0; i < howmany; ++i)
		{
			cout << rs.str  << endl;
		}


	}

}