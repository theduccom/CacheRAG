#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int excel[11][11] = {};

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				cin >> excel[i][j];
				excel[n][n] += excel[i][j];
			}
		}

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				excel[i][n] += excel[i][j];
			}
		}

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				excel[n][i] += excel[j][i];
			}
		}
		for (int i = 0;i <= n;i++) {
			for (int j = 0;j <= n;j++) {
				printf("%5d", excel[i][j]);
				if (j == n) { cout << endl; }
			}
		}
	}
	return 0;
}