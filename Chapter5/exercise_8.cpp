#include<iostream>
#include<cstring>

const int LEN = 50;

int main(void)
{
	using namespace std;

	char stop[] = "ready";
	
	char word[LEN];
	cout << "Enter words. If you want stop enter \"ready\": " << endl;
	cin >> word;

	int count = 0;
	while (strcmp(word, stop))
	{
		count++;
		cin >> word;
	}

	cout << "You entered a total of " << count << " words" << endl;	
	
	return 0;
}