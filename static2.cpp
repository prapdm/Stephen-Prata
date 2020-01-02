#include <iostream>

const int ArSize = 10;



//prototypy
void strcount(const std::string * str);

int main(void)
{

	using namespace std;
	string input;
 
	cout << "Enter text: " << endl;
	getline(cin, input);
	
	while(input != "")
	{
 		
 		static string * pi = &input;
		strcount(pi);
		cout << "Enter next line (empty line end fun): " << endl;
		getline(cin, input);

	}

	return 0;
}

void strcount(const std::string * str)
{

	using namespace std;
	static int total = 0; //statyczna zmienna lokalna podtrzymywana w pamieci rowniez wtedy kiedy program nie wykonuje instrukcji bloku
	int count = 0;

	cout << "\"" << *str << "\" has ";
	count +=  (*str).size();
	total += count;
	cout << count << " characters\n";
	cout << "Total "<< total << " characters\n" ;

}