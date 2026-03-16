#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int n;
	double xa, ya, ra, xb, yb, rb;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		double ab = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
		if (ab + ra < rb)
			cout << -2 << endl;
		else if (ab + rb < ra)
			cout << 2 << endl;
		else if (rb - ra <= ab && rb + ra >= ab)
			cout << 1 << endl;
		else if (ra - rb <= ab && ra + rb >= ab)
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	return 0;
}