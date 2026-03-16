#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<map>
using namespace std;
#define INF (1<<20)
int n,m;
int wa[21][21];
main(){
  cin >> n;
  cin >> m;
  for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) wa[i][j]=INF;
  for(int i=0;i<m;i++){
    int a,b,c,d;
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    wa[a][b]=c;
    wa[b][a]=d;
  }
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++)
	wa[i][j] = min(wa[i][j],wa[i][k]+wa[k][j]);
    }
  }
  int x1,x2,y1,y2;
  scanf("%d,%d,%d,%d",&x1,&x2,&y1,&y2);
  int res = y1 - (wa[x1][x2] + wa[x2][x1] + y2 );
  cout << res << endl;
}