#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>

using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	string s;
	int sum = 0;
	double goods = 0;
	double cnt = 0;
	while(cin >> s) {
		string t, u;
		int i = 0;
		for(; s[i] != ','; i++) {
			t += s[i];
		}
		i++;
		for(; i != s.size(); i++) {
			u += s[i];
		}
		sum += atoi(t.c_str()) * atoi(u.c_str());
		goods += atoi(u.c_str());
		t = "", u = "";
		cnt++;
	}
	cout << sum << endl << (int) (goods / cnt + 0.5) << endl;
	return 0;
}