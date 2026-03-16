#include <iostream>

using namespace std;

int main() {
	string s;
	char c;
	while (getline(cin, s)) {
		for (int i = 0; i < 26; i++) {
			if (s.find("the", 0) != string::npos ||
				s.find("this", 0) != string::npos ||
				s.find("that", 0) != string::npos) {
				cout << s << endl;
				break;
			}
			for (int j = 0; j < s.size(); j++) {
				c = s[j];
				if (!isalpha(c))
					continue;
				if (isalpha(c+1)) {
					s[j] = ++c;
				} else {
					s[j] = 'a';
				}
			}
		}
	}
	return 0;
}