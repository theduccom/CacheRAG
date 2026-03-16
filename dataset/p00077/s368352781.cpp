#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string str;
	while ( cin >> str ) {
		size_t pos;
		while ( (pos = str.find('@')) != string::npos ) {
			int length = str.at(pos+1) - '0';
			char c = str.at(pos+2);
			str.erase(pos, 3);
			str.insert(pos, length, c);
		}
		cout << str << endl;
	}
	
	return 0;
}