#include <iostream>
#include <cstdio>

using namespace std;
#define rep2(x,from,to) for(int x = (from); x < (to); ++(x))
#define rep(x,to) rep2(x,0,to)

int main() {
	bool p[90001];
	p[0] = p[1] = 0;
	rep2(i,2,90001) {
		p[i] = 1;
	}
	rep2(i,2,301) {
		if(p[i]) {
			for(int j = 2; i * j < 90001; j++) {
				p[i * j] = 0;
			}
		}
	}
	int n;
	while(cin >> n) { 
		int k = n - 1;
		while(!p[k]) {
			k--;
		}
		cout << k << " ";
		k = n + 1;
		while(!p[k]) {
			k++;
		}
		cout << k << endl;
	}
	return 0;
}