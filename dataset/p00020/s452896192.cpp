#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	
	getline(cin, str);
	
	for (string::iterator it = str.begin(); it != str.end(); it++) {
		if (*it == ' ' || *it == '.') continue;
		else *it -= 32;
	}
	
	for (string::iterator it = str.begin(); it != str.end(); it++) {
		cout << *it;
	}
	cout << endl;
	
	return 0;
}