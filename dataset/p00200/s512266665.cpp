#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

struct WarshallFloyd {
  vector<vector<int>> d;
  int v;

  WarshallFloyd(int n) : v(n), d(n, vector<int>(n, INF)) {
    for(int i = 0; i < v; ++i) d[i][i] = 0;
  }

  void add(int from, int to, int cost) {
    d[from][to] = cost;
    d[to][from] = cost;
  }

  void make() {
    for(int k = 0; k < v; ++k) {
      for(int i = 0; i < v; ++i) {
        for(int j = 0; j < v; ++j) {
          d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
        }
      }
    }
  }

  int dist(int i, int j) {
    return d[i][j];
  }
};

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  while(cin >> n >> m, n != 0 && m != 0) {
    WarshallFloyd cost(m), time(m);
    for(int i = 0; i < n; ++i) {
      int a, b, c, t;
      cin >> a >> b >> c >> t;
      a--; b--;
      cost.add(a, b, c);
      time.add(a, b, t);
    }

    cost.make();
    time.make();
    int k;
    cin >> k;
    for(int i = 0; i < k; ++i) {
      int p, q, r;
      cin >> p >> q >> r;
      p--; q--;
      if(r == 0) cout << cost.dist(p, q) << endl;
      else cout << time.dist(p, q) << endl;
    }
  }
}
