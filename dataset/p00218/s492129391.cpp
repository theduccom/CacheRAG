#include<iostream>
using namespace std;

int main() {
	int n;
	while (cin >> n, n) {
		for (int i = 0;i < n;i++) {
			int m, e, j;
			int flg;
			cin >> m >> e >> j;
			if (m == 100 || e == 100 || j == 100)flg = 1;
			else if (m + e + j >= 240)flg = 1;
			else if (m + e >= 180)flg = 1;
			else if (m + e + j >= 210)flg = 0;
			else if (m + e + j >= 150 && (m >= 80 || e >= 80))flg = 0;
			else flg = -1;

			if (flg == 1)cout << 'A' << endl;
			else if (flg == 0)cout << 'B' << endl;
			else cout << 'C' << endl;
		}
	}
	return 0;
}