#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

int main() {
	ios :: sync_with_stdio(0);

	for(int n; cin >> n && n; ) {
		int ans = 0;
		for(n /= 5; n; n /= 5)
			ans += n;
		cout << ans << '\n';
	}

	return 0;
}