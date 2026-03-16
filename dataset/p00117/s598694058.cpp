#include<iostream>
#include<cstdio>
using namespace std;

int main() {
	int n, m, a, b, c, d, i, j, k, x[21][21];
	cin >> n >> m;
	for(i = 1; i <= n; i++)
		for(j = 1; j <= n; j++)
			x[i][j] = 1001;
	for(i = 0; i < m; i++) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		x[a][b] = c;
		x[b][a] = d;
	}
	for(k = 1; k <= n; k++)
		for(i = 1; i <= n; i++)
			for(j = 1; j <= n; j++)
				if (x[i][j] > x[i][k] + x[k][j]) x[i][j] = x[i][k] + x[k][j];
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	cout << c - d - x[a][b] - x[b][a] << endl;
	return 0;
}