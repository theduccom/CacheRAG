#include <bits/stdc++.h>
using namespace std;

using ld = long double;
const ld eps = 1e-8, pi = acos(-1.0);

bool eq(ld a, ld b) {
	return abs(a - b) < eps;
}

using Point = complex<ld>;
int main()
{
	int N;
	ld xa, ya, ra, xb, yb, rb;
	cin >> N;
	while (N--) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		ld dis = abs(Point(xa, ya) - Point(xb, yb));
		if (dis + rb < ra - eps) {
			cout << 2 << endl;
		}
		else if (dis + ra < rb - eps) {
			cout << -2 << endl;
		}
		else if (dis > ra + rb + eps) {
			cout << 0 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
	return 0;
}