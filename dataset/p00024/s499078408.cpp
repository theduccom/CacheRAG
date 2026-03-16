#include <bits/stdc++.h>
using namespace std;

using db = double;
const db eps = 1e-9;

int main() {
	ios :: sync_with_stdio(false);
	db maxv;
	while(cin >> maxv) {
		for(int i = 1; ; i ++) {
			db y = 5 * i - 5;
			db v = sqrt(y * 2 * 9.8);
			if(v + eps > maxv) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}