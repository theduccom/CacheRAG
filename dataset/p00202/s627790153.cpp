#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
bool dp[1000001];
bool a[1000001];
int main() {
	long long n, x;
	fill(a, a + 1000001, true);
	a[0] = false;
	a[1] = false;
	for (int i = 0; i <= 1000000; i++) {
		if (a[i]) {
			int j = 2;
			while (i*j <= 1000000) {
				a[i*j] = false;
				j++;
			}
		}
	}
	while (cin >> n >> x&&n != 0 && x != 0) {
		fill(dp, dp + x + 1, false);
		int y;
		dp[0] = true;
		for (int i = 0; i < n; i++) {
			cin >> y;
			for (int i = y; i <= x; i++) {
				if (dp[i - y]) {
					dp[i] = true;
				}
			}
		}
		for (int i = x; i >= 2; i--) {
			if (a[i]&&dp[i]) {
				cout << i << endl;
				goto stop;
			}
		}
		cout << "NA" << endl;
	stop:;
	}
}