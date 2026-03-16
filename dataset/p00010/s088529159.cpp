#include "bits/stdc++.h"
using namespace std;
#define SQ(x) ((x) * (x))
typedef long long ll;
typedef pair<int, int> pii;

#define FOR(i, s, e) for (int(i) = (s); (i) < (e); (i)++)
#define debug(x) cout << #x << ": " << x << endl
#define ALL(x) (x).begin(),(x).end()

const int INF = 1e9;
const ll LINF = 1e16;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(false);
	int s;
	int i;
	double x1, x2, x3;
	double y1, y2, y3;
	double a, b, c, d, e, f;
	double l, m, n;

	cin >> s;
	for (i = 0; i < s; i++) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		a = (x1 - x2);
		b = (y1 - y2);
		c = -1 * (SQ(x1) - SQ(x2) + SQ(y1) - SQ(y2));
		d = (x1 - x3);
		e = (y1 - y3);
		f = -1 * (SQ(x1) - SQ(x3) + SQ(y1) - SQ(y3));

		l = (c * e - b * f) / (e * a - b * d);
		m = (d * c - a * f) / (d * b - e * a);

		n = -1 * (SQ(x1) + SQ(y1) + l * x1 + m * y1);

		printf("%.3f %.3f %.3f\n", l / -2.0, m / -2.0, sqrt(SQ(l) + SQ(m) - 4 * n) / 2.0);
	}

	return (0);
}