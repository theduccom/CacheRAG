#include "bits/stdc++.h"
#define int long long
#define range(i, a, b) for(auto i = a; i < b; i++)
#define rep(i, a) range(i, 0, a)
#define all(a) (a).begin(),(a).end()
using namespace std;
const int INF = sizeof(int) == sizeof(long long) ? 1000000000000000000LL : 1000000000;
const int MOD = 1000000007;
const long double EPS = 1e-8;
using vi = vector <int>;
using vvi = vector <vi>;

vector <bool> eratosthenes(int n) {
	vector <bool> prime(n + 1, true);
	prime = vector <bool> (n + 1, true);
	if(n >= 0) prime[0] = false;
	if(n >= 1) prime[1] = false;
	for(int i = 2; i * i <= n; i++)
		if(prime[i])
			for(int j = i * 2; j < n; j += i)
				prime[j] = false;
	return prime;
}


signed main() {
	vector <bool> sosu = eratosthenes(50100);
	int n;
	while (cin >> n) {
		int mini = 0;
		rep (i, n) if (sosu[i]) mini = i;
		cout << mini << " ";
		for (int i = n + 1; ; i++) if (sosu[i]) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}
