#define _USE_MATH_DEFINES
#include<cstdio>
#include <iostream>
#include<algorithm>
#include<string>
#include<queue>
#include<vector>
#include<functional>
#include<cmath>
#include<map>
#include<stack>
#include<set>
#define INF 10000000
using namespace std;
typedef long long ll;

int cost[110][110];
int tim[110][110];

int main(void)
{
	while (1) {
		int n, m;
		cin >> n >> m;

		if (n == 0 && m == 0)break;

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < m; j++) {
				if (i == j) {
					cost[i][j] = 0;
					tim[i][j] = 0;
				}
				else {
					cost[i][j] = INF;
					tim[i][j] = INF;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			int a, b, c, t;
			cin >> a >> b >> c >> t;
			cost[a - 1][b - 1] = cost[b - 1][a - 1] = c;
			tim[a - 1][b - 1] = tim[b - 1][a - 1] = t;
		}

		for (int k = 0; k < m; k++) {
			for (int j = 0; j < m; j++) {
				for (int i = 0; i < m; i++) {
					cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
					tim[i][j] = min(tim[i][j], tim[i][k] + tim[k][j]);
				}
			}
		}
		int k;
		cin >> k;
		for (int i = 0; i < k; i++) {
			int p, q, r;
			cin >> p >> q >> r;
			if (r == 0)
				cout << cost[p - 1][q - 1] << endl;
			else if (r == 1)
				cout << tim[p - 1][q - 1] << endl;
		}
	}
	return 0;
}