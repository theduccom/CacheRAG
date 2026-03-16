#include<stdio.h>
#include<algorithm>
#include <map>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <functional>
#include <time.h>
using namespace std;
clock_t fi, endtime;

const int INF = 100*6001;
const int r_c = 0;
const int r_t = 1;
const int MAX_V = 100;
const int MAX_E = 6000;

int main()
{
	while (1) {
		int n, m, a, b, c, t;
		int k, p, q, r;

		int wft[MAX_V][MAX_V];
		int wfc[MAX_V][MAX_V];

		scanf("%d %d", &n, &m);
		if (n == 0 && m == 0) break;
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < m; ++j) {
				wfc[i][j] = INF; wft[i][j] = INF;
			}
		}
		for (int i = 0; i < n; ++i) {
			scanf("%d %d %d %d", &a, &b, &c, &t);
			wft[a - 1][b - 1] = t;  wft[b - 1][a - 1] = t;
			wfc[a - 1][b - 1] = c;  wfc[b - 1][a - 1] = c;
		}
		for (int l = 0; l < m; ++l) {
			for (int i = 0; i < m; ++i) {
				for (int j = 0; j < m; ++j) {
					if (wft[i][j] > wft[i][l] + wft[l][j]) { wft[i][j] = wft[i][l] + wft[l][j]; }
					if (wfc[i][j] > wfc[i][l] + wfc[l][j]) { wfc[i][j] = wfc[i][l] + wfc[l][j]; }
				}
			}
		}
		scanf("%d", &k);
		int ans = 0;
		for (int i = 0; i < k; ++i) {
			scanf("%d %d %d", &p, &q, &r);
			if (r == 0) { ans = wfc[p - 1][q - 1]; }
			else { ans = wft[p - 1][q - 1]; }
			printf("%d\n", ans);
		}
	}
}