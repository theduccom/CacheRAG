#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	while (cin >> n && n) {
		long t, f, a;
		t = f = 0;
		for (int i = 1; i <= n; i++) {
			a = i;
			while ( a % 2 == 0 || a % 5 == 0 ) {
				if (a % 2 == 0) {
					t++;
					a /= 2;
				}
				if (a % 5 == 0) {
					f++;
					a /= 5;
				}
			}
		}
		cout << min(t, f) << endl;
	}

	return 0;
}