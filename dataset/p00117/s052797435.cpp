#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<algorithm>
const int INF = 1001;
const int V = 20;
int dis[V][V];
int n, m;

void warshall_floyd(){
	for (int k = 0; k < n; ++k)
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < n; ++j)dis[i][j] = std::min(dis[i][j], dis[i][k] + dis[k][j]);
}

int main(){
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) dis[i][j] = i == j ? 0 : INF;
	for (int i = 0; i < m; ++i){
		int a, b, c, d;
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		--a; --b;
		dis[a][b] = c;
		dis[b][a] = d;
	}
	int x1, x2, y1, y2;
	scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
	--x1; --x2;
	warshall_floyd();
	y1 -= dis[x1][x2];
	y1 -= dis[x2][x1];
	y1 -= y2;
	printf("%d\n", y1);

	return 0;
}