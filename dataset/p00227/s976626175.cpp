#include <bits/stdc++.h>

using namespace std;

#define rep(i, j) for(int i = 0; i < j; ++i)
#define INF (1 << 30)
#define MAX 10000

int main() {
	int n, m, p[MAX];
	while(cin >> n >> m, n || m) {
		int total = 0;
		rep(i, n) {
			cin >> p[i];
			total += p[i];
		}
		sort(p, p + n);
		for(int i = n - m; i >= 0; i -= m) total -= p[i];
		cout << total << endl;
	}
	return 0;
}