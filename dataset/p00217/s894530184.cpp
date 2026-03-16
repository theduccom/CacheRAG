#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int n,p,d1,d2,wa;
	int maxp, maxd = 0;

	while(1) {
		cin >> n;
		maxd = 0;
		if (n == 0) {
			break;
		} else {
			for (int i = 0; i < n; i++) {
				cin >> p >> d1 >> d2;
				wa = d1 + d2;
				if (wa > maxd) {
					maxd = wa;
					maxp = p;
				}
			}
		}

		cout << maxp << " " << maxd << endl;
	}
	return 0;
}