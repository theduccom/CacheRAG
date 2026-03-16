#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n,m;
  int a,b,c,d;
  int x;
  int p,q,r;
  int cost[111][111];
  int time[111][111];
  while(1){
    cin >> n >> m;
    if(n==0 && m==0)break;
    for(int i=0;i<111;i++){
      for(int j=0;j<111;j++){
	cost[i][j]=9999999;
	time[i][j]=9999999;
      }
    }
    for(int i=0;i<n;i++){
      cin >> a >> b >> c >> d;
      cost[a-1][b-1]=cost[b-1][a-1]=c;
      time[a-1][b-1]=time[b-1][a-1]=d;
    }
    for(int k=0;k<m;k++){
      for(int i=0;i<m;i++){
	for(int j=0;j<m;j++){
	  cost[i][j]=min(cost[i][j],cost[i][k]+cost[k][j]);
	  time[i][j]=min(time[i][j],time[i][k]+time[k][j]);
	}
      }
    }
    cin >> x;
    for(int i=0;i<x;i++){
      cin >> p >> q >> r;
      cout << (r==0 ? cost[p-1][q-1] : time[p-1][q-1]) << endl;
    }
  }
}