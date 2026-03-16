#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

const int N = 5e4L + 11;
int p[N];

int main() {
	iota(p, p + N, 0);
	for(int i = 2; i < N; i ++) if(p[i] == i)
		for(int j = i; j < N; j += i) p[j] = i;

	cout << fixed << setprecision(9);
	ios :: sync_with_stdio(0);

	for(int n; cin >> n && n; ) {
		int ans = 0;
		for(int i = 2; i * 2 <= n; i ++)
			if(p[i] == i && p[n - i] == n - i)
				ans ++;
		cout << ans << '\n';
	}

	return 0;
}