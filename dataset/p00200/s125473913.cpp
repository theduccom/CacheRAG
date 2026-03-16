#include<iostream>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)  REP(i,0,n)

#define NODE 301
const int INF = ( 1 << 21);

int table[2][NODE][NODE];
void solve(int n){
  rep(k,n)
    rep(i,n)
    rep(j,n)table[0][i][j]=min(table[0][i][j],table[0][i][k]+table[0][k][j]),
    table[1][i][j]=min(table[1][i][j],table[1][i][k]+table[1][k][j]);
}


main(){
  int n,m;
  while(cin>>m>>n && n){
    rep(i,n){
      rep(j,n)table[0][i][j]=table[1][i][j]=INF;
      table[0][i][i]=table[1][i][i]=0;
    }
    rep(i,m){
      int a,b,cost,time;
      cin>>a>>b>>cost>>time;
      a--,b--;
      table[0][a][b]=cost;table[0][b][a]=cost;
      table[1][a][b]=table[1][b][a]=time;
    }

    solve(n);
    int q;
    cin>>q;
    rep(i,q){
      int f,t,type;
      cin>>f>>t>>type;
      cout << table[type][f-1][t-1] << endl;
    }
    
  }
}