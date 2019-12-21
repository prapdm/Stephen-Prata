#include <iostream>
#include <fstream>
#include <cstdlib> // exit() function
#include <cctype>

const int size = 60;

int main(void)
{

using namespace std;

char filename[size];
ifstream plik;

cout << "Enter name of file: " << endl;
cin >> filename;

plik.open(filename);
if(!plik.is_open())
{
	cout << "Opening the file" << filename << " failed" << endl;
	cout << "Closing..." << endl;
	exit(EXIT_FAILURE);
}

char ch;
int count,spaces = 0;

while(plik.good())
{
ch = plik.get()	;
cout << ch ;
 
if(isspace(ch)) ++spaces; else ++count;


}

if(plik.eof())
{
	cout << "End of file" <<endl;
} else if(plik.fail())
{
	cout << "File reading aborted - error" << endl;
}

if(count == 0)
{

	cout << "Empty file :(" << endl;
} else
{

cout << "\nThere are " << count << " characters in the file and " << spaces << " spaces!" << endl;

}

plik.close();
return 0;
}