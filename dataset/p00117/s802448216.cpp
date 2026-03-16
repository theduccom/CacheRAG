#include <cstdio>
#define REP(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) REP(i, 0, n)
#define min(a, b) ((a) < (b) ? (a) : (b))
#define INF (1 << 20)
int g[20][20];
int main()
{
    int n, m; scanf("%d%d", &n, &m);
    rep(i, n) rep(j, n) g[i][j] = INF;
    rep(i, m) {
        int p, q, r, s;
        scanf("%d,%d,%d,%d", &p, &q, &r, &s);
        p--, q--;
        g[p][q] = r; g[q][p] = s;
    }
    rep(i, n) g[i][i] = 0;
    rep(k, n) rep(i, n) rep(j, n) {
        g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    }

    int w, x, y, z;
    scanf("%d,%d,%d,%d", &w, &x, &y, &z);
    w--, x--;
    printf("%d\n", y - (z + g[w][x] + g[x][w]));

    return 0;
}