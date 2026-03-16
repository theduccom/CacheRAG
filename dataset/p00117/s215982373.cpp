#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int i,j,k;
  int a[20][20],m,n,o,p,q,r;
  cin>>n>>m;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      a[i][j]=200000000;
  for(i=0;i<m;i++){
    int t,u,v,w;
    scanf("%d,%d,%d,%d",&t,&u,&v,&w);
    t--;
    u--;
    a[t][u]=v;
    a[u][t]=w;
  }
  scanf("%d,%d,%d,%d",&o,&p,&q,&r);
  o--;
  p--;
  for(k=0;k<n;k++)
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
	a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
  cout<<q-r-a[o][p]-a[p][o]<<endl;
  return 0;
}