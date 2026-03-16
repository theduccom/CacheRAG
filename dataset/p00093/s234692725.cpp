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
	int a, b;
	bool first = true;
	while (cin >> a >> b, a) {
		if (!first) cout << endl;
		first = false;
		bool na = true;
		range (i, a, b + 1) {
			if (i % 4 == 0) {
				if (i % 400 == 0) {
					na = false;
					cout << i << endl;
				}
				else if (i % 100 != 0) {
					na = false;
					cout << i << endl;
				}
			}
		}
		if (na) cout << "NA" << endl;
	}
	return 0;
}
