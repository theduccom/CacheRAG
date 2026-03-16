#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
	int m[11][11];
	int n;
	while (cin >> n, n) {
		memset(m, 0, sizeof(m));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
				m[n][j] += m[i][j];
				m[i][n] += m[i][j];
				m[n][n] += m[i][j];
			}
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				printf("%5d", m[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}