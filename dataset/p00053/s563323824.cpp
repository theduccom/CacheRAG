#include <bits/stdc++.h>
using namespace std;

using db = double;
using ll = long long;
using vi = vector <int>;
#define op operator
#define pb push_back

const int N = 2e5L + 11;
int p[N];

int main() {
	iota(p, p + N, 0);
	for(int i = 2; i < N; i ++) if(p[i] == i)
		for(int j = i; j < N; j += i) p[j] = i;

	ios :: sync_with_stdio(0);

	for(int n; cin >> n && n; ) {
		int ans = 0;
		for(int i = 2; i < N; i ++) if(p[i] == i && n) {
			n --;
			ans += i;
		}
		cout << ans << '\n';
	}

	return 0;
}