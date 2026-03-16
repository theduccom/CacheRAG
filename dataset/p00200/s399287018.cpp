#include<iostream>
#include<algorithm>
using namespace std;
const int INF=(1<<21);
main(){
  int n,m,h;
  int from,to,cost,time;
  int roadmoney[101][101];
  int roadtime[101][101];
  while(1){
    cin>>n>>m;
    if(n==0&&m==0)break;
    for(int i=0;i<=m;i++){
      for(int j=0;j<=m;j++){
	roadmoney[i][j]=INF;
	roadtime[i][j]=INF;
      }
    }
    for(int i=0;i<n;i++){
      cin>>from>>to>>cost>>time;
      roadmoney[from][to]=roadmoney[to][from]=cost;
      roadtime[from][to]=roadtime[to][from]=time;
    }
    for(int i=1;i<=m;i++){
      for(int j=1;j<=m;j++){
	for(int k=1;k<=m;k++){
	  roadmoney[j][k]=min(roadmoney[j][k],roadmoney[j][i]+roadmoney[i][k]);
	  roadtime[j][k]=min(roadtime[j][k],roadtime[j][i]+roadtime[i][k]);
	}
      }
    }
    cin>>h;
    int q,p,r;
    for(int i=0;i<h;i++){
      cin>>q>>p>>r;
      if(r==0){
	cout<<roadmoney[q][p]<<endl;
      }
      else{
	cout<<roadtime[q][p]<<endl;
      }
    }
  }
}