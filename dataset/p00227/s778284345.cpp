#include <bits/stdc++.h>
using namespace std;

#define for_(i,a,b) for(int i=(a);i<(b);++i)

int n, m, p[1010];

int main() {
	while (cin >> n >> m, n) {
		for_(i,0,n) cin >> p[i];
		
		sort(p, p + n, greater< int >());
		
		int ans = 0, cnt = 1;
		
		for_(i,0,n) {
			if (cnt == m) {
				cnt = 1;
			} else {
				++cnt;
				ans += p[i];
			}
		}
		
		cout << ans << endl;
	}
}