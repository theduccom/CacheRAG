#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
const int INF = (1<<21);
int n;

struct edge {
  int to, cost;
  edge(int _to, int _cost) {to = _to; cost=_cost;}
};
typedef pair<int, int> P;


int V;
vector<edge> G[20];
int d[20];

int dij(int s,int g) {
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d, d + n, INF);
  d[s] = 0;
  que.push(P(0, s));
  
  while(!que.empty()) {
    P p = que.top(); que.pop();
    int v = p.second;
    if (d[v] < p.first) {
      continue;
    }
    for (int i = 0; i < G[v].size(); i++) {
      edge e = G[v][i];
      if (d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
  return (d[g]);
}

int main(){
  int m,y1,y2,x1,x2;
  cin>> n>> m;
  for(int i=0;i<m;i++){
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    G[a-1].push_back(edge(b-1,c));
    G[b-1].push_back(edge(a-1,d));
  }
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);

  cout<< y1-(y2+dij(x1-1,x2-1)+dij(x2-1,x1-1))<< endl;
}