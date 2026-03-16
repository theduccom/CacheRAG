#include <iostream>
#include <cstdio>

using namespace std;

#define INF 1 << 16

int main() {
	int cost[20][20]; fill(&cost[0][0], &cost[0][0]+20*20, INF);

	int n; cin >> n;
	int m; cin >> m;

	for (int i = 0; i < m; ++i) {
		int a, b, c, d; scanf("%d,%d,%d,%d\n", &a, &b, &c, &d); --a, --b;
		cost[a][b] = c;
		cost[b][a] = d;
	}

	int s, g, reward, price; scanf("%d,%d,%d,%d\n", &s, &g, &reward, &price); --s, --g;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n; ++k)
				if (cost[j][i] + cost[i][k] < cost[j][k])
					cost[j][k] = cost[j][i] + cost[i][k];

	cout << (reward - price - cost[s][g] - cost[g][s]) << endl;

	
}