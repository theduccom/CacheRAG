#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (getline(cin, s)) {
		
		int x = 1;
		for (unsigned i = 0; i < s.size(); i++) {
			if (s[i] == '@') {
				x = s[i + 1] - '0';
				i++;
			}
			else {
				cout << string(x, s[i]);
				x = 1;
			}
		}
		cout << endl;
	}
	return 0;
}