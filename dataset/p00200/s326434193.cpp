#include<bits/stdc++.h>
using namespace std;

#define INF 1<<25

int main(){
  int cost[101][101];
  int times[101][101];
  int n,m;
  int a,b,c,t;
  while(cin>>n>>m,n|m){
    for(int i=0;i<101;i++){
      for(int j=0;j<101;j++){
	cost[i][j]=times[i][j]=INF;
      }
    }
    for(int i=0;i<n;i++){
      cin>>a>>b>>c>>t;
      cost[a][b]=cost[b][a]=c;
      times[a][b]=times[b][a]=t;
    }
    for(int i=1;i<=m;i++){
      for(int j=1;j<=m;j++){
	for(int k=1;k<=m;k++){
	  cost[j][k]=min(cost[j][k],cost[j][i]+cost[i][k]);
	  times[j][k]=min(times[j][k],times[j][i]+times[i][k]);
	}
      }
    }
    int k,p,q,r;
    cin>>k;
    for(int i=0;i<k;i++){
      cin>>p>>q>>r;
      cout<<(r==0 ? cost[p][q] : times[p][q] ) <<endl;
    }
  }
} 
    