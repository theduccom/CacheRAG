//22
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int d[21][21];
  fill_n(d[0],21*21,1<<29);
  for(int i=0;i<m;i++){
    int a[4];
    for(int i=0;i<4;i++){
      cin>>a[i];
      cin.ignore();
    }
    d[a[0]][a[1]]=a[2];
    d[a[1]][a[0]]=a[3];
  }
  for(int i=1;i<=20;i++){
    for(int j=1;j<=20;j++){
      for(int k=1;k<=20;k++){
	d[j][k]=min(d[j][k],d[j][i]+d[i][k]);
      }
    }
  }
  int s,t,p,c;
  (((cin>>s).ignore()>>t).ignore()>>p).ignore()>>c;
  cout<<p-c-d[s][t]-d[t][s]<<endl;
  return 0;
}