#include <bits/stdc++.h>

#define REP(i, a, b) for (int i = (int)(a); i < (int)(b); ++i)
#define rep(i, n) REP (i, 0, n)
#define mset(a, n) memset(a, n, sizeof(a))

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pair<int, int> > vpii;

int main() {
	double n;
	while (cin >> n) {
		double t = n / 9.8;
		double y = 4.9 * t * t;
		// 繰り上げ関数ceil
		int ans = ceil((y + 5) / 5);
		cout << ans << endl;
	}
}