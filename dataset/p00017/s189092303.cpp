#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
	string str;
	string w[3] = { "the","this",  "that" };
	while (getline(cin, str)) {
		if (str == "")break;
		while (true) {
			if (str.find("this") == string::npos &&
				str.find("the") == string::npos &&
				str.find("that") == string::npos ) {

				for (char &c : str) {
					if (c != ' ' && c != '.') {
						c = (c - 'a' + 1) % 26 + 'a';
					}
				}

			}
			else {
				break;
			}
		}
		cout << str << endl;
	}
}