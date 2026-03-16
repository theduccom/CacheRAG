#include <bits/stdc++.h>

using namespace std;

int n;
int tb[11][11];

int main() {
	while (1) {
		cin >> n; if (n == 0) break;
		memset(tb, 0, sizeof(tb));
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> tb[i][j];
			}
		}
		
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				tb[i][n] += tb[i][j];
				tb[n][j] += tb[i][j];
				tb[n][n] += tb[i][j];
			}
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