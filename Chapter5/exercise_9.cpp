#include<iostream>
#include<string>

int main(void)
{
	using namespace std;
	string stop = "ready";
	string word;
	

	cout << "Enter words. If you want stop enter \"ready\": " << endl;
	cin >> word;

	int count = 0;

	while (word != stop)
	{
		count++;
		cin >> word;
	}

	cout << "You entered a total of " << count << " words" << endl;	
	
	return 0;
}
