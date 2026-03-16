#define _USE_MATH_DEFINES
#include "bits/stdc++.h"
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	int n, m;
	while (cin >> n >> m, m) {
		vector<int>p(n);
		for (int i = 0; i < n; i++)cin >> p[i];
		sort(p.rbegin(), p.rend());
		int sum = 0;
		for (int i = 0; i < n; i++) {
			if ((i + 1) % m == 0)continue;
			sum += p[i];
		}
		cout << sum << endl;
	}
	return 0;
}