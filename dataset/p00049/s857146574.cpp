#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	string s;
	string b[4] = {"A", "B", "AB", "O"};
	int ret[4];
	rep(i,4) {
		ret[i] = 0;
	}
	while(cin >> s) {
		string t;
		for(int i = 0; i < s.length(); i++) {
			if(isalpha(s[i])) t+= s[i];
		}
		rep(i,4) {
			if(t == b[i]) ret[i]++;
		}
	}
	rep(i,4) {
		cout << ret[i] << endl;
	}
	return 0;
}