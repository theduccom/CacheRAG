#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional>
#include <utility>
using namespace std;

typedef pair<int,int> P;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)
#define mp make_pair
#define pb push_back

struct edge {
  int to, cost, time;
  edge(int a, int b, int c): to(a), cost(b), time(c) {}
};

const int MAX_M = 100, INF = 10000000;
int n, m;

vector<edge> E[MAX_M+1];

void solve() {
  rep(i,MAX_M+1) E[i].clear();
  
  rep(i,n) {
    int a, b, cost, time; cin>>a>>b>>cost>>time;
    E[a].push_back(edge(b, cost, time));
    E[b].push_back(edge(a, cost, time));
  }
  int zz; cin>>zz;
  rep(z,zz) {
    int p, q, r; cin>>p>>q>>r;
    // dijkstra
    int d[MAX_M+1];
    fill(d, d+MAX_M+1, INF);
    priority_queue<P, vector<P>, greater<P> > que;
    que.push(P(0, p));
    d[p] = 0;
    while (!que.empty()) {
      P p = que.top(); que.pop();
      int td = p.first, ti = p.second;
      if (d[ti] < td) continue;
      rep(i,E[ti].size()) {
        edge e = E[ti][i];
        if (r == 0) {
          if (d[e.to] > d[ti] + e.cost) {
            d[e.to] = d[ti] + e.cost;
            que.push(P(d[e.to], e.to));
          } 
        } else {
          if (d[e.to] > d[ti] + e.time) {
            d[e.to] = d[ti] + e.time;
            que.push(P(d[e.to], e.to));
          }
        }
      }
    }
    cout<<d[q]<<endl;
  }
}

int main (int argc, char const* argv[]) {
  while (cin>>n>>m, n||m) {
    solve();
  }
  return 0;
}