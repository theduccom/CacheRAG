#include<iostream>
#include<string>
using namespace std;
int main() {
	int t,u;
	int i;
	string s;
	while (getline(cin, s)) {
		t = 0;
		u = s.size();
		while (t==0) {
			for (i = 0; i < u; i++) {
				if (s[i] == 'z') {
					s[i] = 'a';
				}
				else if('a'<=s[i]&&s[i]<'z') {
					s[i] += 1;
				}
			}
			while (s.find("the") != string::npos || s.find("this") != string::npos || s.find("that") != string::npos) {
				t = 1;
				break;
			}
		}
		cout << s << endl;
	}
	return 0;
}