#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>

const int kMaxTown = 21; //0?????????????????????
const int kInf = 1 << 16;

int d[kMaxTown];
int arrived[kMaxTown];
int cost[kMaxTown][kMaxTown];

void dijkstra(const int s, const int n){
	for (int i = 0; i < kMaxTown; i++) d[i] = kInf;
	for (int i = 0; i < kMaxTown; i++) arrived[i] = false;

	d[s] = 0;

	while (1){
		int minTown = 0;
		for (int i = 1; i <= n; i++)
			if (!arrived[i] && (d[i] < d[minTown]))
				minTown = i;
		if (minTown == 0) break;
		arrived[minTown] = true;
		for (int i = 1; i <= n; i++)
			d[i] = std::min(d[i], d[minTown] + cost[minTown][i]);
	}

}

int main(){

	for (int i = 0; i < kMaxTown; i++)
		for (int j = 0; j < kMaxTown; j++)
			cost[i][j] = kMaxTown;

	int n, m;
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i < m; i++){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		cost[a][b] = c;
		cost[b][a] = d;
	}
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	
	dijkstra(x1, n);
	y1 -= d[x2];
	dijkstra(x2, n);
	y1 -= d[x1];

	printf("%d\n", y1-y2);
}