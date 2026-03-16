#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
using namespace std;
#define INF 100000000
#define MAXM 128
typedef long long ll;

int dtime[MAXM][MAXM], dcost[MAXM][MAXM];
int n, m;

int main(void) {
    while (cin >> n >> m && n && m) {
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= m; j++) {
                dtime[i][j] = INF;
                dcost[i][j] = INF;
            }
        }
        for (int i = 0; i < n; i++) {
            int a, b, cost, time;
            cin >> a >> b >> cost >> time;
            dtime[a][b] = dtime[b][a] = time;
            dcost[a][b] = dcost[b][a] = cost;
        }
        for (int k = 1; k <= m; k++) {
            for (int i = 1; i <= m; i++) {
                for (int j = 1; j <= m; j++) {
                    dtime[i][j] = min(dtime[i][j], dtime[i][k] + dtime[k][j]);
                    dcost[i][j] = min(dcost[i][j], dcost[i][k] + dcost[k][j]);
                }
            }
        }
        int K;
        cin >> K;
        for (int i = 0; i < K; i++) {
            int p, q, r;
            cin >> p >> q >> r;
            if (r == 0) {
                cout << dcost[p][q] << endl;
            } else {
                cout << dtime[p][q] << endl;
            }
        }
    }
    return 0;
}