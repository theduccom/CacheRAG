#include <iostream>

using namespace std;

typedef long long ll;

int main() {
	int a, b, c;
	while (cin >> a >> b >> c, a || b || c) {
		ll v = -max( max(a * a, b * b), c * c ) + a * a + b * b + c * c;
		int n; cin >> n;
		for (int i = 0; i < n; ++i) {
			ll r; cin >> r;
			r *= 2;
			r *= r;
			if (r > v) cout << "OK" << endl;
			else cout << "NA" << endl;
		}
	}
}