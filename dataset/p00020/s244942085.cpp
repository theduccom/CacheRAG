#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	int i = 0;
	while (i < s.length()) {
		if ('a' <= s[i] && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
		i++;
	}
	cout << s << endl;

	return 0;
}