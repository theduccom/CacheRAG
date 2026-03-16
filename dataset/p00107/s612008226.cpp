#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	double W, H, D, a, b, r, ab;

	while (cin >> W >> H >> D) {
		int n;
		if (W == 0 && H == 0 && D == 0) break;

		a = min(min(W, H), D);
		b = min(max(W, H), D);

		ab = a*a + b*b;

		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> r;

			r = (r * 2) * (r * 2);

			if (ab < r)
				cout << "OK" << endl;
			else
				cout << "NA" << endl;
		}
	}
}