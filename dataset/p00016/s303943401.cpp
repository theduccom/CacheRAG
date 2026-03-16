#include <bits/stdc++.h>
using namespace std;

using db = double;
const db pi = 4 * atan(1);

void p(db x) {
	if(x >= 0)
		cout << int(x + 1e-9) << '\n';
	else
		cout << int(x - 1e-9) << '\n';
}

int main() {
	cout << fixed << setprecision(0);
	ios :: sync_with_stdio(false);
	db d, t; char c;
	db x = 0, y = 0, a = 90;
	while(cin >> d >> c >> t) {
		x += d * cos(a / 180 * pi);
		y += d * sin(a / 180 * pi);
		a -= t;
	}
	p(x); p(y);
	return 0;
}