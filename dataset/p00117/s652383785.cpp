#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
#define INF 1<<29
using namespace std;
main(){
  int n,m,a,b,c,d;;
  cin>>n>>m;
  int di[n][n];
  r(i,n)r(j,n)di[i][j]=(i==j)?0:INF;
  while(m--){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    a--;b--;
    di[a][b]=c;
    di[b][a]=d;
  }
  r(k,n)r(i,n)r(j,n)di[i][j]=min(di[i][j],di[i][k]+di[k][j]);
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);a--;b--;
  cout<<c-d-di[a][b]-di[b][a]<<endl;
}