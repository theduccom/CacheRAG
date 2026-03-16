#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)

const int N = 300;
const int inf = (1 << 21);
int cost[2][N][N];

void calc(bool a,int n){
  rep(k,n)
    rep(i,n)
    rep(j,n)
      cost[a][i][j]=min(cost[a][i][j],cost[a][i][k]+cost[a][k][j]);
}

main(){
  int n,m;
  while(cin>>m>>n && n){
    rep(i,n){
      rep(j,n)cost[0][i][j]=cost[1][i][j]=inf;
      cost[0][i][i]=cost[1][i][i]=0;
    }
    
    rep(i,m){
      int f,t,mo,ti;
      cin>>f>>t>>mo>>ti;
      f--;t--;
      cost[0][f][t]=cost[0][t][f]=mo;
      cost[1][f][t]=cost[1][t][f]=ti;
    }

    calc(0,n);
    calc(1,n);

    int q;
    cin>>q;
    rep(i,q){
      int f,t,r;
      cin>>f>>t>>r;
      f--;t--;
      cout << cost[r][f][t] << endl;

    }

  }
  return 0;
}