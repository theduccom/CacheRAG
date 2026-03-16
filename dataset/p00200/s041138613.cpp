#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <map>
#include <utility>
#include <set>
#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <sstream>
#include <complex>
#include <stack>
#include <queue>
#include <cstring>
#include <sstream>
#include <cassert>
#ifndef M_PI
const double M_PI=acos(-1);
#endif
using namespace std;
static const double EPS = 1e-8;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> PI;
#define rep(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define SZ(a) (int(a.size()))
#define F first
#define S second
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};

int cost[100][100];
int ti[100][100];

main(){
  int n,m;
  while(cin>>n>>m,n|m){
    rep(i,m){
      rep(j,m)cost[i][j]=ti[i][j]=1<<28;
      cost[i][i]=ti[i][i]=0;
    }
    rep(i,n){
      int a,b,c,t;
      cin>>a>>b>>c>>t;
      --a,--b;
      cost[b][a]=cost[a][b]=min(cost[a][b],c);
      ti[a][b]=ti[b][a]=min(ti[a][b],t);
    }
    rep(k,m)rep(i,m)rep(j,m){
      cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
      ti[i][j]=min(ti[i][j],ti[i][k]+ti[k][j]);
    }
    int k;
    cin>>k;
    rep(i,k){
      int p,q,r;
      cin>>p>>q>>r;
      --p,--q;
      cout<<(r?ti[p][q]:cost[p][q])<<endl;
    }
  }
}