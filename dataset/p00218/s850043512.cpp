#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;
typedef pair<char, int>P;

int main() {
	int n;
	while (cin >> n, n) {
		rep(i, n) {
			int p, q, r; cin >> p >> q >> r;
			if (p == 100 || q == 100 || r == 100)puts("A");
			else if (p + q >= 180)puts("A");
			else if (p + q + r >= 240)puts("A");
			else if (p + q + r >= 210)puts("B");
			else if (p + q + r >= 150 && (p >= 80 || q >= 80))puts("B");
			else puts("C");
		}
	}
	return 0;
}