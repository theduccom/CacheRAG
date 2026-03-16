#include <bits/stdc++.h>

using namespace std;

int n;
int tb[11][11];

int main() {
	while (1) {
		cin >> n; if (n == 0) break;
		
		int allsum = 0;
		for (int i = 0; i < n; i++) {
			int rsum = 0;
			for (int j = 0; j < n; j++) {
				cin >> tb[i][j];
				rsum += tb[i][j];
			}
			tb[i][n] = rsum;
			allsum += rsum;
		}
		tb[n][n] = allsum;
		
		for (int j = 0; j < n; j++) {
			int csum = 0;
			for (int i = 0; i < n; i++) {
				csum += tb[i][j];
			}
			tb[n][j] = csum;
		}
		
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				cout << setw(5) << tb[i][j];
			}
			cout << endl;
		}
	}	
	
	return 0;
}