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
	int n; cin >> n;
	while (n--) {
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double d = sqrt((xb - xa) * (xb - xa) + (yb - ya) * (yb - ya));
		if (d < ra - rb) cout << "2" << endl;
		else if (d < rb - ra) cout << "-2" << endl;
		else if (ra - rb <= d && d <= ra + rb) cout << "1" << endl;
		else if (d > ra + rb) cout << "0" << endl;
	}
}