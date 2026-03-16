#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0217

int main() {
	int n;
	while (cin >> n) {
		if (n == 0) break;
		int mi = 0, mc = 0;
		for (int i = 0; i < n; i++) {
			int d, a, b;
			cin >> d >> a >> b;
			if ((a + b) > mc) {
				mc = a + b;
				mi = d;
			}
		}
		cout << mi << " " << mc << endl;
	}
	return 0;
}