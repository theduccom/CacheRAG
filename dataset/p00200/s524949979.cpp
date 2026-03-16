#include <iostream>
#include <algorithm>
const int MAX_V = 100;
const int INF = 99999999;
using namespace std;

int c[MAX_V][MAX_V];
int t[MAX_V][MAX_V];

int main(void) {
  while (1) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) break;
    for (int i = 0; i < MAX_V; i++) {
      for (int j = 0; j < MAX_V; j++) {
        c[i][j] = INF;
        t[i][j] = INF;
      }
    }
    
    for (int i = 0; i < n; i++) {
      int a, b, cost, time;
      cin >> a >> b >> cost >> time;
      a--; b--;
      c[a][b] = c[b][a] = cost;
      t[a][b] = t[b][a] = time;
    }

    for (int k = 0; k < m; k++) {
      for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
          c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
          t[i][j] = min(t[i][j], t[i][k] + t[k][j]);
        }
      }
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
      int p, q, r;
      cin >> p >> q >> r;
      p--; q--;
      if (r == 0) {
        cout << c[p][q] << endl;
      } else {
        cout << t[p][q] << endl;
      }
    }
  }

  return 0;
}