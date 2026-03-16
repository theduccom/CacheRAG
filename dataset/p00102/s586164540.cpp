#include<iostream>
#include<cstring>
using namespace std;
int x[4000][4000], n;
int main() {
	while (true) {
		memset(x, 0, sizeof(x));
		cin >> n;
		if (!n) { break; }
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> x[i][j]; x[i][n] += x[i][j]; x[n][j] += x[i][j]; x[n][n] += x[i][j];
			}
		}
		for (int i = 0; i <= n; i++) {
			for (int j = 0; j <= n; j++) {
				if (x[i][j] < 10) { cout << " " ; }
				if (x[i][j] < 100) { cout << " " ; }
				if (x[i][j] < 1000) { cout << " " ; }
				if (x[i][j] < 10000) { cout << " " ; }
				cout << x[i][j];
			}
			cout << endl;
		}
	}
}