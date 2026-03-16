#include <iostream>
#include <cctype>
#include <string>
using namespace std;

char change(char c){
	if(c == ' ') return ' ';
	if(c == '.') return '.';
	return toupper(c);
}

int main()
{
	string s;
	getline(cin, s);
	for(string::const_iterator iter = s.begin();
		iter != s.end(); iter++)
	{
		cout << change(*iter);
	}
	cout << endl;
	return 0;
}