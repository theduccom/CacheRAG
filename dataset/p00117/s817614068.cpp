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

int main(void){
  char s;
  int n,m,x1,x2,y1,y2;
  REP(i,20)
    REP(j,20)
      cost[i][j] = (i!=j)?INFINITY:0;
  cin>>n>>m;
  while(m--){
    int a,b,c,d;
    cin>>a>>s>>b>>s>>c>>s>>d;
    cost[a-1][b-1] = c;
    cost[b-1][a-1] = d;
  }
  cin>>x1>>s>>x2>>s>>y1>>s>>y2;
  REP(k,n)
    REP(i,n)
      REP(j,n)
       cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
  cout << y1 - y2 - cost[x1-1][x2-1] - cost[x2-1][x1-1] << endl;
  return 0;
}