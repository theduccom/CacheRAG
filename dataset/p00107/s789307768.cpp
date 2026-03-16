#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

#define rep2(x,from,to) for(int x=(from);(x)<(to);(x)++)
#define rep(x,to) rep2(x,0,to)

int r;
bool ok(int a, int b) {
	double c = pow(a, 2.0) + pow(b, 2.0);
	if(c < pow(r * 2, 2.0)) return true;
	else return false;
}
int main() {
	int n, m, k, s;
	while(cin >> n >> m >> k && (n || m || k)) {
		cin >> s;
		rep(i,s) {
			cin >> r;
			if(ok(n, m) || ok(m, k) || ok(k, n)) {
				cout << "OK" << endl;
			} else cout << "NA" << endl;
		}
	}
	return 0;
}