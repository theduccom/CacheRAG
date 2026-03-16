#include <bits/stdc++.h>
using namespace std;

int main() {
	ios :: sync_with_stdio(false);
	for(int n; cin >> n; ) {
		for(int i = 0; i < 10; i ++) if((n >> i) & 1) {
			n -= (1 << i);
			cout << (1 << i) << (n ? ' ' : '\n');
		}
	}
	return 0;
}