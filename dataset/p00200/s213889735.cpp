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

int main(void){  
  int n,m,a,b,c,t,h,p,q,r;
  while(cin >> n >> m,n){
    int cost[100][100]={0};
    int time[100][100]={0};
    REP(i,n){
    cin >> a >> b >> c >> t;
    cost[a-1][b-1] = cost[b-1][a-1] = c;
    time[a-1][b-1] = time[b-1][a-1] = t;
  }
  REP(i,m)
    REP(j,m){
      if(!cost[i][j]&&i!=j) cost[i][j] = 1000000000;
      if(!time[i][j]&&i!=j) time[i][j] = 1000000000;
    }
  REP(k,m)
    REP(i,m)
      REP(j,m){
        cost[i][j] = min(cost[i][j],cost[i][k] + cost[k][j]);
        time[i][j] = min(time[i][j],time[i][k] + time[k][j]);
      }
  cin >> h;
  REP(i,h){
    cin >> p >> q >> r;
    if(r==0) cout << cost[p-1][q-1] << endl;
    else cout << time[p-1][q-1] << endl;
  }
  }
  return 0;
}