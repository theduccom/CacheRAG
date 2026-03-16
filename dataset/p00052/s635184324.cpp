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

signed main() {
	int n;
	while (cin >> n, n) {
		map <int, int> pear;
		for (int i = n; i > 0; i--) {
			int tmp = i;
			for (int j = 2; j * j <= tmp; j++) {
				while(tmp % j == 0) {
					pear[j]++;
					tmp /= j;
				}
			}
			if (tmp != 1) {
				pear[tmp]++;
			}
		}
		cout << min(pear[2], pear[5]) << endl;
	}
	return 0;
}
