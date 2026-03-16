#include <iostream>
#include <algorithm>

using namespace std;

int main () {
	int d, w, h, n, r;
	while(true) {
		cin >> d >> w >> h;
		if (!d && !w && !h) break;

		int diagonal = min({
			d * d + w * w,
			d * d + h * h,
			h * h + w * w
		});

		cin >> n;
		while (n--) {
			cin >> r;
			cout << ((r * r * 4 > diagonal) ? "OK" : "NA") << endl;
		}
	}
	return 0;
}
