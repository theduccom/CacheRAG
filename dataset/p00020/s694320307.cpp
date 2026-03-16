#include <iostream>
#include <string>
using namespace std;


int main()
{
	string inputString;
	getline(cin, inputString);
	for (auto& c : inputString)
	{
		if (c != '.' && c != ' ') c += 'A' - 'a';
	}

	cout << inputString << endl;

	return 0;
}