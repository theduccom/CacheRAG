#include <bits/stdc++.h>
using namespace std;

int main()
{
	char c;
	int x, y, s;
	vector<vector<int>> b(10, vector<int>(10));
	while (cin >> x >> c >> y >> c >> s) {
		if (s == 1) {
			for (int i = -1; i <= 1; i++) {
				for (int j = abs(i) - 1; j <= 1 - abs(i); j++) {
					if (x + i >= 0 && x + i <= 9 && y + j >= 0 && y + j <= 9) {
						b[x + i][y + j]++;
					}
				}
			}
		}
		else if (s == 2) {
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					if (x + i >= 0 && x + i <= 9 && y + j >= 0 && y + j <= 9) {
						b[x + i][y + j]++;
					}
				}
			}
		}
		else {
			for (int i = -2; i <= 2; i++) {
				for (int j = abs(i) - 2; j <= 2 - abs(i); j++) {
					if (x + i >= 0 && x + i <= 9 && y + j >= 0 && y + j <= 9) {
						b[x + i][y + j]++;
					}
				}
			}
		}
	}
	int ma = 0, cnt = 0;
	for (int i = 0; i <= 9; i++) {
		for (int j = 0; j <= 9; j++) {
			if (b[i][j]) {
				cnt++;
				ma = max(ma, b[i][j]);
			}
		}
	}
	cout << 100 - cnt << endl;
	cout << ma << endl;
	return 0;
}