#include <climits>
#include <iostream>
#define rep(i, n) for (int i = 0; i < n; i++)
#define min(a, b) (a > b ? b : a)

int main() {
    int m, n;
    while (std::cin >> m >> n && m != 0 && n != 0) {
        int tb[n][n][2];

        rep(i, n) rep(j, n) tb[i][j][0] = tb[i][j][1] = tb[j][i][0] =
            tb[j][i][1] = (i == j ? 0 : INT_MAX / 3);
        rep(i, m) {
            int f, t, c, tm;
            std::cin >> f >> t >> c >> tm;
            f--;
            t--;
            tb[f][t][0] = tb[t][f][0] = c;
            tb[f][t][1] = tb[t][f][1] = tm;
        }
        rep(x, n) rep(y, n) rep(z, n) rep(i, 2) tb[z][y][i] = tb[y][z][i] =
            min(tb[y][z][i], tb[y][x][i] + tb[x][z][i]);

        int k;
        std::cin >> k;
        rep(i, k) {
            int s, e, q;
            std::cin >> s >> e >> q;
            s--;
            e--;
            std::cout << tb[s][e][q] << std::endl;
        }
    }
}