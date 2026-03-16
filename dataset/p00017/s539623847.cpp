#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	while (getline(cin,s)) {
		for (int i = 0;i < 26;++i) {
			for (char &c : s) {
				if (c != ' ' && c != '.') {
					++c;
					if (c > 'z') {
						c -= (char)26;
					} else if (c < 'a') {
						c += (char)26;
					}
				}
			}
			if (s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos) {
				cout << s << endl;
				break;
			}
		}
	}
}