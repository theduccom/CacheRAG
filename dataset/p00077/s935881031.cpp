#include <string>
#include <iostream>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		string::size_type pos;
		while ((pos = s.find('@')) != string::npos) {
			s.replace(pos,3,(string::size_type)(s[pos+1]-'0'),s[pos+2]);
		}
		cout << s << endl;
	}
}