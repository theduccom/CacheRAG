#include <iostream>
#include <cstdio>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	int n;
	int t[20001], f[20001];
	t[0] = t[1] = 0;
	t[2] = 1;
	rep2(i,3,20001) {
		t[i] = (i % 2 == 0) ? t[i / 2] + 1 : 0;
	}
	rep2(i,1,20001) {
		t[i] += t[i-1];
	}
	rep(i,5) {
		f[i] = 0;
	}
	f[5] = 1;
	rep2(i,6,20001) {
		f[i] = (i % 5 == 0) ? f[i / 5] + 1 : 0;
	}
	rep2(i,1,20001) {
		f[i] += f[i-1];
	}
	int ret[20001];
	rep(i,20001) {
		ret[i] = min(t[i], f[i]);
	}
	while(cin >> n && n) {
		cout << ret[n] << endl;
	}
	return 0;
}