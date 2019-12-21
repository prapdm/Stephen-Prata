#include <iostream>
#include <cstring>

//prototypy
void uppercase (std::string & tekst);

int main(void)
{

	using namespace std;
	string tekst;

	cout << "Enter some text. If you want end type q." << endl;
	 

	while(getline(cin,tekst))
	{

		if(tekst == "q" || tekst == "Q") break;
	 
 		uppercase(tekst);
 		cout <<  tekst << endl;
		cout << "Enter some text. If you want end type q." << endl;

	}


	cout << "Bye, bye" << endl;

return 0;
}


void uppercase (std::string & tekst) 
{
	for(int i = 0;  i < tekst.size(); ++i)
	{
		tekst[i] = toupper(tekst[i]);
	}

}