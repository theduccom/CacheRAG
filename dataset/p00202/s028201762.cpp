#include <iostream>
#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)
using namespace std;
int m[30] = {};
bool p[1000000] = {}, b[1000000] = {};

void calc(int n, int x) {
	rep(i,n) {
		int a = m[i];
		rep2(j,a,x+1) {
			if(b[j-a]) b[j] = 1;
		}
	}
}
int main(){
	int n, x;
	p[0] = p[1] = 1;
	rep2(i,2,1001) {
		if(!p[i]) {
			for(int j = 2*i; j < 1000000; j+=i) {
				p[j] = 1;
			}
		}
	}

	while(cin >> n >> x, (n||x)) {
		fill(m,m+30,0);
		rep(i,n) {
			cin >> m[i];
		}
		rep(i,1000000) {
			b[i] = 0;
		}
		b[0] = 1;
		calc(n,x);
		int i = x;
		for(; i > 0; --i) {
			if(!p[i] && b[i]) {
				cout << i << endl;
				break;
			}
		}
		if(i==0) cout << "NA" << endl;
	}
}