#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	unsigned count = 0;

	while(1) {
		bool rev = true;
		string str;
		cin >> str;
		if(cin.eof()) break;

		for(unsigned i = 0; i < str.length() / 2; i++)
			if(str.at(i) != str.at(str.length() - i - 1))
				rev = false;

		if(rev == true)
			count++;
	}

	cout << count << endl;
	return 0;
}