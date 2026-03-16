#include <iostream>
#include <cstdio>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	bool p[50001];
	p[0] = p[1] = 0;
	rep2(i,2,50001) {
		p[i] = 1;
	}
	rep(i,50001) {
		if(p[i]) {
			for(int j = 2; i * j <= 50000; j++) {
				p[i * j] = 0;
			}
		}
	}

	int n;
	while(cin >> n && n) {
		int cnt = 0;
		rep(i,n / 2 + 1) {
			if(p[i] && p[n - i]) cnt++;
		}
		cout << cnt << endl;	
	}
	return 0;
}