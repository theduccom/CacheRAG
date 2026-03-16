#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		for (int i = 0; i < 26; ++i) {
			for (int j = 0; j < (int)str.size(); ++j) {
				if (str[j] >= 'a' && str[j] <= 'z') {
					str[j] = (str[j] - 'a' + 1) % 26 + 'a';
				}
			}
			if (str.find("the") != string::npos || str.find("this") != string::npos || str.find("that") != string::npos) break;
		}
		cout << str << endl;
	}
}