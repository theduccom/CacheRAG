#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	bool p[10010] = {};
	p[0] = p[1] = 1;
	rep2(i,2,101) {
		if(!p[i]) {
			for(int j=2*i;j<=10000;j+=i) {
				p[j] = 1;
			}
		}
	}
	int n;
	while(cin >> n, n) {
		while(p[n] || p[n-2]) --n;
		cout << n-2 << " " << n << endl;
	}
	return 0;
}