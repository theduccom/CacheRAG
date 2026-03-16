#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 1000000
#define MAX_C 32
bool dp[MAX_N * 2];
bool prime[MAX_N]; int n, m, a[MAX_C];
int main() {
	for (int i = 2; i < MAX_N; i++) { prime[i] = true; }
	for (int i = 2; i*i < MAX_N; i++) {
		for (int j = i*i; j < MAX_N; j += i) {
			prime[j] = false;
		}
	}
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) { break; }
		for (int i = 0; i <= m; i++) {
			dp[i] = false;
		}
		dp[0] = true;
		for (int i = 0; i < n; i++) { cin >> a[i]; }
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (dp[j] == true) {
					dp[j] = true;
					dp[j + a[i]] = true;
				}
			}
		}
		for (int i = m; i >= 0; i--) {
			if (dp[i] == true && prime[i] == true) {
				cout << i << endl; goto E;
			}
		}
		cout << "NA" << endl;
	E:;
	}
	return 0;
}