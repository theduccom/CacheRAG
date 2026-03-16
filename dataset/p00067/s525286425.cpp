#include<iostream>
#include<string>
using namespace std;
int a[12][12];
void solve(int m, int n) {
	if (m + 1<12 && a[m + 1][n] == 1) {
		a[m + 1][n] = 0;
		solve(m + 1, n);
	}
	if (m - 1 >= 0 && a[m - 1][n] == 1) {
		a[m - 1][n] = 0;
		solve(m - 1, n);
	}
	if (n + 1<12 && a[m][n + 1] == 1) {
		a[m][n + 1] = 0;
		solve(m, n + 1);
	}
	if (n - 1 >= 0 && a[m][n - 1] == 1) {
		a[m][n - 1] = 0;
		solve(m, n - 1);
	}
}
int main() {
	int z = 0;
	while (true) {
		string b;
		getline(cin, b);
		if (b == ""&&z == 0) {
			z++;
			getline(cin,b);
		}
		if (b == ""&&z != 2) {
			z++;
			getline(cin, b);
		}
		if (b == "")
			break;
		z = 0;
		for (int i = 0; i<12; i++) {
			a[0][i] = (int)b[i] - '0';
		}
		for (int i = 1; i<12; i++) {
			cin >> b;
			for (int j = 0; j<12; j++) {
				a[i][j] = (int)b[j] - '0';
			}
		}
		int o = 0;
		for (int i = 0; i<12; i++) {
			for (int j = 0; j<12; j++) {
				if (a[i][j] == 1) {
					o++;
					a[i][j] = 0;
					solve(i, j);
				}
			}
		}
		cout << o << endl;
	}
}