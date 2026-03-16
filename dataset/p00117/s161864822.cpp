#include <cstdio>
#include <queue>
using namespace std;
const int MAX_N = 20;
// 隣接行列
// map[a][b] = a->bのコスト
const int MAX = 0x7fffffff;//通行不可を表す
int map[MAX_N+1][MAX_N+1];
// 街の総数，街道の総数
int n, m;

// そこまでのコスト-場所
typedef pair<int, int> node;
bool visited[MAX_N+1];
int solve(int from, int to) {
	fill(visited, visited + MAX_N+1, false);
	priority_queue< node, vector<node>, greater<node> > que;
	que.push(node(0, from));
	while (!que.empty()) {
		node point = que.top();
		que.pop();
		if (point.second == to) {
			return point.first;
		}
		for (int i = 1; i <= n; i++) {
			if (map[point.second][i] < MAX && !visited[i]) {
				que.push(node(point.first + map[point.second][i], i));
			}
		}
		visited[point.second] = true;
	}
	return -1;
}

int main () {
	scanf("%d", &n);
	scanf("%d", &m);
	//最大コストで初期化
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			map[i][j] = MAX;
	int a, b, c, d;
	for (int i = 0; i < m; i++) {
		scanf("%d,%d,%d,%d", &a, &b, &c, &d);
		map[a][b] = c;
		map[b][a] = d;
	}
	scanf("%d,%d,%d,%d", &a, &b, &c, &d);
	printf("%d\n", c - d - solve(a, b) - solve(b, a));
	return 0;
}