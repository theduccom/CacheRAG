#include <bits/stdc++.h>
using namespace std;
using ld = long double;

int main()
{
	char c;
	int d, a;
	ld x = 0, y = 0;
	int deg = 90;
	while (cin >> d >> c >> a, d | a) {
		ld ar = deg * acosl(-1) / 180;
		x += d * cosl(ar);
		y += d * sinl(ar);
		deg -= a;
	}
	cout << (int)x << endl;
	cout << (int)y << endl;
	return 0;
}