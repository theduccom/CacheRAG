#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		int nums[11][11];
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)
				cin >> nums[i][j];

		for (int i = 0; i < n; ++i) {
			nums[i][n] = nums[n][i] = 0;
			for (int j = 0; j < n; ++j) {
				nums[i][n] += nums[i][j];
				nums[n][i] += nums[j][i];
			}
		}

		nums[n][n] = 0;
		for (int i = 0; i < n; ++i)
			nums[n][n] += nums[i][n];

		for (int i = 0; i <= n; ++i, cout << endl)
			for (int j = 0; j <= n; ++j)
				printf("%5d", nums[i][j]);
	}
}