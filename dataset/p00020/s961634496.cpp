#include <iostream>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		char c = s[i];
		if (islower(c)) {
			c = toupper(c);
			s[i] = c;
		}
	}
	cout << s << endl;
	return 0;
}