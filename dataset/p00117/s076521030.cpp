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

const int r_c = 0;
const int r_t = 1;
const int MAX_V = 20;
const int MAX_E = 100;
const int MAX_D = 1000;

const int INF = MAX_V * MAX_E * MAX_D;

int main()
{
	int wf[MAX_V][MAX_V];
	int n, m, a, b, c, d, s, g, V, P;
	int sum = 0;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			wf[i][j] = INF;
		}
	}
	for (int i = 0; i < m; ++i) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		wf[a - 1][b - 1] = c; wf[b - 1][a - 1] = d;
	}
	for (int k = 0; k < n; ++k) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (wf[i][j] > wf[i][k] + wf[k][j])
					wf[i][j] = wf[i][k] + wf[k][j];
			}
		}
	}
	scanf("%d,%d,%d,%d", &s, &g, &V, &P);

	sum = wf[s - 1][g - 1] + wf[g - 1][s - 1] + P;
	printf("%d\n", V - sum);

}