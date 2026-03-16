#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <iomanip>
#include <cassert>
#include <bitset>
using namespace std;

typedef pair<int, int> P;
#define rep(i, n) for (int i=0; i<(n); i++)
#define all(c) (c).begin(), (c).end()
#define uniq(c) c.erase(unique(all(c)), (c).end())
#define _1 first
#define _2 second
#define pb push_back
#define INF 1145141919
#define MOD 1000000007

int N, M, Q;
vector<P> G[100][2];
int dist[100][100][2];

signed main() {
  ios::sync_with_stdio(false); cin.tie(0);
  while (cin >> M >> N) {
    if (M == 0 && N == 0) break;
    rep(i, N) rep(k, 2) G[i][k].clear();
    rep(i, N) rep(j, N) rep(k, 2) dist[i][j][k] = INF;
    rep(i, M) {
      int a, b, c, t;
      cin >> a >> b >> c >> t;
      a--, b--;
      G[a][0].pb(P(b, c));
      G[b][0].pb(P(a, c));
      G[a][1].pb(P(b, t));
      G[b][1].pb(P(a, t));
    }
    rep(k, 2) {
      rep(s, N) {
        priority_queue<P, vector<P>, greater<P> > q;
        dist[s][s][k] = 0;
        q.push(P(0, s));

        while (!q.empty()) {
          int x = q.top()._2, r = q.top()._1;
          q.pop();
          if (dist[s][x][k] < r) continue;
          for (P p : G[x][k]) {
            int t = p._1, l = p._2;
            if (dist[s][t][k] > r+l) {
              dist[s][t][k] = r+l;
              q.push(P(r+l, t));
            }
          }
        }
      }
    }
    cin >> Q;
    rep(i, Q) {
      int p, q, r;
      cin >> p >> q >> r;
      p--, q--;
      cout << dist[p][q][r] << "\n";
    }
  }
  return 0;
}