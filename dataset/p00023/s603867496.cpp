#include "bits/stdc++.h"
using namespace std;

int main() {
	int T; cin >> T;
	for (int t = 1; t <= T;t++) {
		double xa, ya, ra, xb, yb, rb;
		cin >> xa >> ya >> ra >> xb >> yb >> rb;

		double dist = pow(xa - xb, 2) + pow(ya - yb, 2);
		if (pow(ra + rb, 2) < dist) {
			cout << 0 << endl;
		}
		else {
			if (dist < pow(ra - rb, 2) && rb < ra) {
				cout << 2 << endl;
			}
			else if(dist < pow(ra - rb,2) && ra < rb){
				cout << -2 << endl;
			}
			else {
				cout << 1 << endl;
			}
		}
	}
}