#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
#include <algorithm>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to) 
int main() {
	string s;
	int x=0, y=0;
	while(cin >> s) {
		int a[3];
		int p = s.find(",", 0);
		int q = s.find(",", p + 1);
		a[0] = atoi(s.substr(0, p).c_str());
		a[1] = atoi(s.substr(p + 1, q - p).c_str());
		a[2] = atoi(s.substr(q + 1).c_str());
		sort(a, a+2);
		if(a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) x++;
		else if(a[0] == a[1]) y++;
	}
	cout << x << endl;
	cout << y << endl;
	return 0;
}