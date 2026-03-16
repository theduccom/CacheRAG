#include "bits/stdc++.h"

#define ALL(a) (a).begin(),(a).end()
#define SORT(c) sort((c).begin(),(c).end())
#define DESCSORT(c) sort(c.begin(), c.end(), greater<int>())

using namespace std;

using LL = long long int;
using LD = long double;

using pii = pair<int, int>;
using pll = pair<LL, LL>;
using pdd = pair<double, double>;
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vl = vector<LL>;
using vvl = vector<vl>;
using vvvl = vector<vvl>;
using vd = vector<double>;
using vvd = vector<vd>;
using vs = vector<string>;
using vb = vector<bool>;
using vvb = vector<vb>;

const int INF = (1 << 30) - 1;
const LL INF64 = ((LL)1 << 62) - 1;
const double PI = 3.1415926535897932384626433832795;

const int dy[] = { 0, 1, 0, -1 };
const int dx[] = { 1, 0, -1, 0 };

int gcd(int x, int y) { return y ? gcd(y, x % y) : x; }
LL gcd(LL x, LL y) { return y ? gcd(y, x % y) : x; }

int main() {

	vvi m(14, vi(14));

	char ch;
	int x, y, s;
	while (cin >> x >> ch >> y >> ch >> s){
		y += 2;
		x += 2;

		m[y][x]++;
		m[y + 1][x]++;
		m[y - 1][x]++;
		m[y][x + 1]++;
		m[y][x - 1]++;

		if (s == 1) {
			continue;
		}

		m[y + 1][x + 1]++;
		m[y + 1][x - 1]++;
		m[y - 1][x + 1]++;
		m[y - 1][x - 1]++;

		if (s == 2) {
			continue;
		}

		m[y + 2][x]++;
		m[y - 2][x]++;
		m[y][x + 2]++;
		m[y][x - 2]++;
	}

	int noInkGrid = 0;
	int maxInc = 0;
	for (int i = 2; i < 12; i++) {
		for (int j = 2; j < 12; j++) {
			if (m[i][j] == 0) {
				noInkGrid++;
			}
			maxInc = max(maxInc, m[i][j]);
		}
	}

	cout << noInkGrid << endl;
	cout << maxInc << endl;
	return 0;
}