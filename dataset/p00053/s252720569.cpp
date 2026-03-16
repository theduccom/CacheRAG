#include <iostream>
#include <cstdio>
using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)
#define MAX_PRIME 160000
int main() {
	bool p[MAX_PRIME];
	p[0] = p[1] = 0;
	rep2(i,2,MAX_PRIME) {
		p[i] = 1;
	}
	rep(i,400) {
		if(p[i]) {
			for(int j = 2; i * j < MAX_PRIME; j++) {
				p[i * j] = 0;
			}
		}
	}
	int ret[10010];
	ret[0] = 0;
	int cnt = 0;
	rep2(i,1,10001) {
		while(!p[cnt]) {
			cnt++;
		}
		ret[i] = ret[i-1] + cnt;
		cnt++;
	}
	int n;
	while(cin >> n && n) {
		cout << ret[n] << endl;
	}
	return 0;
}