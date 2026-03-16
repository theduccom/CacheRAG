#include<iostream>
#include<algorithm>
using namespace std;
int x[2000][2000], a, b, c, p, sum, maxn; char f;
int main() {
	while (cin >> a >> f >> b >> f >> p) {
		if (p % 2 == 1) {
			c = p / 2 + 1;
			for (int i = -c; i <= c; i++) {
				for (int j = -c; j <= c; j++) {
					if (a + i >= 0 && b + j >= 0) {
						if ((i + j >= -c && i + j <= c) && (i - j >= -c && i - j <= c)) {
							x[a + i][b + j]++;
						}
					}
				}
			}
		}
		else {
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					if (a + i >= 0 && b + j >= 0) {
						x[a + i][b + j]++;
					}
				}
			}
		}
	}
	sum = 0;
	maxn = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (x[i][j] == 0) { sum++; }
			maxn = max(maxn, x[i][j]);
		}
	}
	cout << sum << endl << maxn << endl;
}