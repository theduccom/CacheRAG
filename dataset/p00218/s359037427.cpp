#include <iostream>

using namespace std;

char judge(int a, int b, int c) {
	if (a == 100 || b == 100 || c == 100) return 'A';
	if ((a + b) / 2.0 >= 90) return 'A';

	int p = a + b + c;
	double aver = p / 3.0;

	if (aver >= 80) return 'A';
	if (aver >= 70) return 'B';
	if (aver >= 50 && (a >= 80 || b >= 80)) return 'B';

	return 'C';
}

int main() {
	int n;

	while (cin >> n, n) {
		for (int i = 0; i < n; ++i) {
			int a, b, c; cin >> a >> b >> c;
			cout << judge(a, b, c) << endl;
		}
	}
}