#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <queue>
#define F first
#define S second
using namespace std;

struct edge{
  int t,c;
  edge(){}
  edge(int t,int c):t(t),c(c){}
};

typedef pair<int,int> P;

int n,m;
vector<edge> g[22];
int d[22];

void djk(int s){

  fill(d,d+n+1,1<<20);
  priority_queue<P, vector<P>, greater<P> > que;
  que.push(P(0,s));
  d[s] = 0;
  while(!que.empty()){
    P p = que.top();que.pop();
    if(d[p.S] < p.F) continue;
    for(int i = 0; i < (int)g[p.S].size(); i++){
      if(d[g[p.S][i].t] > d[p.S] + g[p.S][i].c){
	d[g[p.S][i].t] = d[p.S] + g[p.S][i].c;
	que.push(P(d[p.S] + g[p.S][i].c,g[p.S][i].t));
      }
    }
  }
}

int main(void)
{
  scanf("%d %d",&n,&m);
  for(int i = 0; i < m; i++){
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    g[a].push_back(edge(b,c));
    g[b].push_back(edge(a,d));
  }

  int s,g,y,b;
  scanf("%d,%d,%d,%d",&s,&g,&y,&b);
  int k = 0;
  djk(s);
  k += d[g];
  djk(g);
  k += d[s];
  printf("%d\n",y - b - k);
}