#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int a[15][15];
int main() {
	int n;
	while (cin >> n, n) {
		rep(i, n) {
			rep(j, n) {
				scanf("%d", &a[i][j]);
			}
		}
		rep(i, n) {
			int cnt = 0;
			rep(j, n)cnt += a[i][j];
			a[i][n] = cnt;
		}
		rep(i, n) {
			int cnt = 0;
			rep(j, n)cnt += a[j][i];
			a[n][i] = cnt;
		}
		a[n][n] = 0;
		rep(i, n)a[n][n] += a[i][n];
		rep(i, n + 1) {
			rep(j, n + 1) {
				printf("%5d", a[i][j]);
				if (j == n)printf("\n");
			}
		}
	}
	return 0;
}