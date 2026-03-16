#include <iostream>
using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0218

int main() {
	int n;
	while (cin >> n) {
		for (int i = 0; i < n; i++) {
			int m, e, j;
			cin >> m >> e >> j;
			int avg = (m + e + j) / 3;
			if (m == 100 || e == 100 || j == 100) cout << "A";
			else if ((m + e) / 2 >= 90) cout << "A";
			else if (avg >= 80) cout << "A";
			else if (avg >= 70) cout << "B";
			else if (avg >= 50 && (m >= 80 || e >= 80)) cout << "B";
			else cout << "C";
			cout << endl;
		}
	}
	return 0;
}