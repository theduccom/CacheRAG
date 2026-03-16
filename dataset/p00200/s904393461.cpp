#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int INF = 10000000;
const int MAX_V = 100;
int d[2][MAX_V][MAX_V];

void solve() {
    while (true) {
        int E, V;
        cin >> E >> V;

        if (E == 0 && V == 0) break;

        //initialize
        REP(h, 2) {
            REP(i, V) {
                REP(j, V) {
                    if (i == j) d[h][i][j] = 0;
                    else        d[h][i][j] = INF;
                }
            }
        }

        //make graph
        REP(i, E) {
            int u, v, c1, c2;
            cin >> u >> v >> c1 >> c2;
            u--; v--;
            d[0][u][v] = c1; d[0][v][u] = c1;
            d[1][u][v] = c2; d[1][v][u] = c2;
        }

        //Warshall-Floyd
        REP(h, 2) {
            REP(k, V) {
                REP(i, V) {
                    REP(j, V) {
                        d[h][i][j] = min(d[h][i][j], d[h][i][k] + d[h][k][j]);
                    }
                }
            }
        }

        int K;
        cin >> K;

        REP(i, K) {
            int p, q, r;
            cin >> p >> q >> r;
            p--; q--;
            cout << d[r][p][q] << endl;
        }
    }
}


int main() {
    solve();
    return 0;
}