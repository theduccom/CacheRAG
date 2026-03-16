#include <iostream>
using namespace std;
#define REP(i,n) for (int i=0; i<(n); ++i)

int d[2][100][100];

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    while (cin >> n >> m, n || m) {
        REP(i,2) REP(j,m) REP(k,m) {
            d[i][j][k] = (j == k ? 0 : 1e8);
        }
        int a, b, cost, time;
        REP(i,n) {
            cin >> a >> b >> cost >> time;
            -- a; -- b;
            d[0][a][b] = min(d[0][a][b], cost);
            d[0][b][a] = min(d[0][b][a], cost);
            d[1][a][b] = min(d[1][a][b], time);
            d[1][b][a] = min(d[1][b][a], time);
        }
        REP(k,m) REP(i,m) REP(j,m) {
            d[0][i][j] = min(d[0][i][j], d[0][i][k] + d[0][k][j]);
            d[0][j][i] = min(d[0][j][i], d[0][j][k] + d[0][k][i]);
            d[1][i][j] = min(d[1][i][j], d[1][i][k] + d[1][k][j]);
            d[1][j][i] = min(d[1][j][i], d[1][j][k] + d[1][k][i]);
        }
        int k, p, q, r;
        cin >> k;
        REP(i,k) {
            cin >> p >> q >> r;
            -- p; -- q;
            cout << d[r][p][q] << endl;
        }
    }
    return 0;
}