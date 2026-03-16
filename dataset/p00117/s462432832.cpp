#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

using namespace std;

typedef unsigned int uint;
typedef long long ll;

#define MAX 1000000

int main(){
  int n, m;
  while(~scanf("%d%d",&n,&m)){
    int road[n][n];
    REP(i,n) REP(j,n) road[i][j] = MAX;
    REP(i,m){
      int a,b,c,d;
      scanf("%d,%d,%d,%d",&a,&b,&c,&d);
      road[a-1][b-1] = c;
      road[b-1][a-1] = d;
    }
    int x1,x2,y1,y2;
    scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
    REP(k,n) REP(i,n) REP(j,n)
      road[i][j] = min(road[i][j], road[i][k] + road[k][j]);
    //cout << road[x1-1][x2-1] + road[x2-1][x1-1] << endl;
    cout << y1 - y2 - road[x1-1][x2-1] - road[x2-1][x1-1] << endl;
  }
  return 0;
}