#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	string s;
	int cnt = 0;
	while(cin >> s) {
		int len = s.length();
		bool f = 1;
		rep(i,len / 2 + 1) {
			if(s[i] != s[len - i - 1]) {
				f = 0;
				break;
			}
		}
		if(f) cnt++;
	}
	cout << cnt << endl;
	return 0;
}