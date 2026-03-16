#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	string s;
	while(cin >> s) {
		string ns;
		rep(i,s.length()) {
			if(s[i] == '@') {
				string t;
				rep(j,s[i+1]-'0') {
					t += s[i+2];
				}
				ns += t;
				i += 2;
			} else {
				ns += s[i];
			}
		}
		cout << ns << endl;
	}
	return 0;
}