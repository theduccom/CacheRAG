#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int N,i;
	double xa, ya, ra, xb, yb, rb,r;
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> xa >> ya >> ra >> xb >> yb >> rb;
		r =pow(xb - xa, 2.0) + pow(yb - ya, 2.0);
		if (sqrt(r) > ra + rb) {
			cout << 0 << endl;
		}
		else if (sqrt(r) <ra-rb){
			cout << 2 << endl;
		}
		else if (sqrt(r) < rb - ra) {
			cout << -2 << endl;
		}
		else {
			cout << 1 << endl;
		}
	}
	return 0;
}