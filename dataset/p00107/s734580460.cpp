#include <iostream>
using namespace std;
int main() {
	int n, r, d, w, h, x;
	while (1) {
		cin >> d >> w >> h;
		if (d + w + h == 0)
			return 0;
		if (d <= h && w <= h)
			x = d * d + w * w;
		else if (d <= w && h <= w)
			x = d * d + h * h;
		else if (w <= d && h <= d)
			x = w * w + h * h;
		cin >> n;
		for (int lop = 0; lop < n; lop++) {
			cin >> r;
			if (4*r*r > x)
				cout << "OK\n";
			else
				cout << "NA\n";
		}
	}
	return 0;
}
