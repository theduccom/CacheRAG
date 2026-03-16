#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	int n;
	while (cin >> n) {
		if (n == 0) { break; }
		int x, y, a[15][15] = {};
		for (int i = 0; i < n; i++) {
			int sum = 0;
			for (int j = 0; j <= n; j++) {
				if (j == n) {
					a[i][n] = sum;
					continue;
				}
				cin >> a[i][j];
				sum += a[i][j];
			}
		}
		for (int i = 0; i<n; i++) {
			for (int j = 0; j <= n; j++) {
				a[n][j] += a[i][j];
			}
		}
		for (int i = 0; i<=n; i++) {
			for (int j = 0; j <= n; j++) {
				int k;
				if (a[i][j] != 0) {
					k = log10(a[i][j]);
					k = 4 - k;
				}
				else{
					k = 4;
				}
				for(int z = 0; z < k; z++){
					cout << " ";
				}
				cout << a[i][j];
			}

			cout << endl;
		}
	}
	return 0;
}