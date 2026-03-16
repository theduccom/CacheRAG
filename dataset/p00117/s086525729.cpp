#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>

using namespace std;
typedef long long LL;
static const double EPS = 1e-9;

#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)
#define REP(i,n) FOR(i,0,n)
#define INFINITY 100000
int cost[20][20];

int dijkstra(int n, int s, int g){
  set<int> S;
  S.insert(s);
  int distance[n];
  REP(i,n)
    distance[i] = cost[s][i];
  while(S.find(g) == S.end()){
    int sol,mindis=INFINITY;
    REP(i,n)
      if(S.find(i) == S.end()&&distance[i]<mindis){
        mindis = distance[i];
        sol = i;
      }
    S.insert(sol);
    REP(i,n)
      distance[i] = min(distance[i],distance[sol] + cost[sol][i]);
  }
  return distance[g];
}

int main(void){
  int n,m,x1,x2,y1,y2;
  REP(i,20)
    REP(j,20)
      cost[i][j] = (i!=j)?INFINITY:0;
  cin>>n>>m;
  while(m--){
    int a,b,c,d;
    cin>>a; getchar(); cin>>b; getchar(); cin>>c; getchar(); cin>>d;
    cost[a-1][b-1] = c;
    cost[b-1][a-1] = d;
  }
  cin>>x1; getchar(); cin>>x2; getchar(); cin>>y1; getchar(); cin>>y2;
  cout << y1 - y2 - dijkstra(n,x1-1,x2-1) - dijkstra(n,x2-1,x1-1) << endl;
  return 0;
}