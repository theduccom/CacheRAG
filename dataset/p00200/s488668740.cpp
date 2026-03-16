#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

typedef uint32_t ui;

static const ui INF = 1 << 30;

ui cost[101][101][2];

int main() {
  int n, m;
  while (cin >> n >> m, n | m) {
    fill_n(cost[0][0], sizeof(cost) / sizeof(ui), INF);
    for (int i = 1; i <= m; i++) cost[i][i][0] = cost[i][i][1] = 0;
    while (n--) {
      int a, b, c, t;
      cin >> a >> b >> c >> t;
      cost[a][b][0] = c;
      cost[b][a][0] = c;
      cost[a][b][1] = t;
      cost[b][a][1] = t;
    }

    for (int k = 1; k <= m; k++) {
      for (int i = 1; i <= m; i++) {
        for (int j = i + 1; j <= m; j++) {
          for (auto&& r : {0, 1}) {
            cost[i][j][r] = cost[j][i][r] = min(cost[i][k][r] + cost[k][j][r], cost[i][j][r]);
          }
        }
      }
    }

    int k;
    cin >> k;
    while (k--) {
      int p, q, r;
      cin >> p >> q >> r;
      cout << cost[p][q][r] << endl;
    }
  }
  return 0;
}