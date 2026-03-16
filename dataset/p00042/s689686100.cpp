#include<iostream>
#include<algorithm>
#include<string>
#include<typeinfo>
#include<cstdlib>
using namespace std;
int b[1000][1001];
int main() {
	int w, n;
	int sum = 1;
	while (cin >> w&&w != 0) {
		cin >> n;
		int a[1000][2];
		for (int i = 0; i < n; i++) {
			string h;
			cin >> h;
			h += ",";
			string k = "";
			int l = 0;
			for (int j = 0; j < h.length(); j++) {
				if (h[j] == ',') {
					a[i][l] = atoi(k.c_str());
					k = "";
					l++;
				}
				else
					k += h[j];
			}
		}
		int sum1 = 0, sum2 = 1002;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j <= w; j++) {
				b[i][j] = -1;
				if (j == 0) b[i][j] = 0;
			}
		}
		b[0][a[0][1]] = a[0][0];
		for (int i = 1; i < n; i++) {
			for (int j = 0; j <= w; j++) {
				int l = -1;
				if (j - a[i][1] >= 0) {
					if (b[i - 1][j - a[i][1]] != -1 && b[i - 1][j] != -1)
						l = max(b[i - 1][j], b[i - 1][j - a[i][1]] + a[i][0]);
					else if (b[i - 1][j - a[i][1]] != -1)
						l = b[i - 1][j - a[i][1]] + a[i][0];
					else if (b[i - 1][j] != -1)
						l = b[i - 1][j];
				}
				else if (b[i - 1][j] != -1)
					l = b[i - 1][j];
				b[i][j] = max(l, b[i][j]);
			}
		}
		for (int i = w; i >= 0; i--) {
			if (b[n - 1][i] >= sum1) {
				sum1 = b[n - 1][i];
				sum2 = i;
			}
		}
		cout << "Case " << sum << ":" << endl;
		cout << sum1 << "\n" << sum2 << endl;
		sum++;
	}
}