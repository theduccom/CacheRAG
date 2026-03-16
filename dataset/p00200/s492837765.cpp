#include <cstdio>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int INF = 10000000;
const int MAX_V = 1000;
int graph[2][MAX_V][MAX_V];
int n, m;

bool visited[MAX_V];
int cost[MAX_V];

void init_graph() {
    REP(h, 2) {
        REP(i, m) {
            REP(j, m) {
                if (i == j) graph[h][i][j] = 0;
                else        graph[h][i][j] = INF;
            }
        }
    }
}

void make() {
    REP(i, n) {
        int u, v, c, t;
        scanf("%d %d %d %d", &u, &v, &c, &t);
        u--; v--;
        graph[0][u][v] = c; graph[0][v][u] = c;
        graph[1][u][v] = t; graph[1][v][u] = t;
    }
}

void init_dijkstra() {
    REP(i, MAX_V) visited[i] = false;
    REP(i, MAX_V) cost[i] = INF;
}

void dijkstra(int start, int g[MAX_V][MAX_V]) {
    init_dijkstra();

    cost[start] = 0;

    while (true) {
        int mi = INF;
        int nxt = -1;
        visited[start] = true;
        REP(i, m) {
            if (visited[i]) continue;
            if (i != start) {
                int d = cost[start] + g[start][i];
                if (d < cost[i]) {
                    cost[i] = d;
                }
            }
            if (mi > cost[i]) {
                mi = cost[i];
                nxt = i;
            }
        }
        start = nxt;
        if (nxt == -1) break;
    }
}

void solve() {
    while (true) {
        scanf("%d %d", &n, &m);

        if (n == 0 && m == 0) break;

        init_graph();

        make();

        int k;
        scanf("%d", &k);

        REP(i, k) {
            int p, q, r;
            scanf("%d %d %d", &p, &q, &r);
            p--; q--;
            dijkstra(p, graph[r]);
            printf("%d\n", cost[q]);
        }
    }
}

int main() {
    solve();
    return 0;
}