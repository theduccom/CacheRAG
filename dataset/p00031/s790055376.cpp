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
	while (cin >> n) {
		rep (i, 1 << 10) {
			int sum = 0;
			rep (j, 10) {
				if (i >> j & 1) {
					sum += pow(2, j);
				}
			}
			if (sum == n) {
				bool First = true;
				rep (j, 10) {
					if (i >> j & 1) {
						if (!First)
							cout << " ";
						else
							First = false;
						cout << pow(2, j);
					}
				}
				cout << endl;
				break;
			}
		}
	}
	return 0;
}
