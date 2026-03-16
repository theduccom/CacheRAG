#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string str;
	getline(cin, str);
	istringstream input(str);
	
	while (!input.eof()) {
		input >> str;
		for (int i = 0; i < str.length(); ++i) {
			if (i + 4 < str.length() && str[i] == 'a' && str[i + 1] == 'p' && str[i + 2] == 'p' && str[i + 3] == 'l' && str[i + 4] == 'e') {
				str[i] = 'p';
				str[i + 1] = 'e';
				str[i + 2] = 'a';
				str[i + 3] = 'c';
				str[i + 4] = 'h';
				i += 4;
			}
			else if (i + 4 < str.length() && str[i] == 'p' && str[i + 1] == 'e' && str[i + 2] == 'a' && str[i + 3] == 'c' && str[i + 4] == 'h') {
				str[i] = 'a';
				str[i + 1] = str[i + 2] = 'p';
				str[i + 3] = 'l';
				str[i + 4] = 'e';
				i += 4;
			}
		}
		cout << str << (input.eof() ? '\n' : ' ');
	}
	return 0;
}