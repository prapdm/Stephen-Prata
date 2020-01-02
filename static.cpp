#include <iostream>

const int ArSize = 10;

//prototypy
void strcount(const char * str);

int main(void)
{

	using namespace std;
	char input[ArSize];
	char next;

	cout << "Enter text: " << endl;
	cin.get(input, ArSize);

	//jezeli cos zostalo w cin bierzemy to dalej
	while(cin)
	{

		cin.get(next); //wezmy to co zostalo do next
		while(next != '\n') //doopoki nie ma znaku nowej lini pociągnij z cin do konca
			cin.get(next);
		//wywolanie funkcji liczacej znaki
		strcount(input);
		cout << "Enter next line (empty line end fun): " << endl;
		cin.get(input, ArSize);

	}

	return 0;
}

void strcount(const char * str)
{

	using namespace std;
	static int total = 0; //statyczna zmienna lokalna podtrzymywana w pamieci rowniez wtedy kiedy program nie wykonuje instrukcji bloku
	int count = 0;

	cout << "\"" << str << "\" has ";
	while(*str++)
		count++;
	total += count;
	cout << count << " characters\n";
	cout << "Total "<< total << " characters\n" ;

}