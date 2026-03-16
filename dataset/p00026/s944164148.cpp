#include <bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
typedef long long ll;

int a[15][15];
int dx[] = { 0,0,1,-1 }, dy[] = { 1,-1,0,0 };
int nx[] = { 0,0,2,-2 }, ny[] = { 2,-2,0,0 };
int main() {
	string S;
	while (cin >> S) {
		int x, y, s;
		sscanf(S.data(), "%d,%d,%d", &x, &y, &s);
		if (s == 1) {
			a[x][y]++;
			rep(i, 4) {
				if (x + dx[i] >= 0 && y + dy[i] >= 0)
					a[x + dx[i]][y + dy[i]]++;
			}
		}
		else for (int i = -1; i <= 1; i++)for (int j = -1; j <= 1; j++) {
			if (x + i >= 0 && x + j >= 0)a[x + i][y + j]++;
		}
		if (s == 3)rep(i, 4) {
			if (x + nx[i] >= 0 && y + ny[i] >= 0)
				a[x + nx[i]][y + ny[i]]++;
		}
	}
	int cnt = 0, Max = 0;
	rep(i, 10) {
		rep(j, 10) {
			if (!a[i][j])cnt++;
			Max = max(Max, a[i][j]);
		}
	}
	cout << cnt << endl << Max << endl;
	return 0;
}