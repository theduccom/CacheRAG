#include <iostream>
#include <algorithm>
#define INF 1000000000
using namespace std;
int mp[2][101][101];
int n,m;

int visit(int p,int q,int r) {


  bool flg[101] = {};
  long long dis[101];
  for(int i=1;i<=m;i++) dis[i] = INF;

  dis[p] = 0;
 
  while(1) {
    int mindis = INF;
    int ima;
    for(int i=1;i<=m;i++) 
      if(mindis > dis[i] && flg[i] == 0) {
	mindis = dis[i];
	ima = i;
      }

    flg[ima] = 1;
    if(ima == q) return dis[ima];

    for(int i=1;i<=m;i++) 
      if(dis[i] > mp[r][ima][i]+dis[ima]) 
	dis[i] = dis[ima] + mp[r][ima][i];
    
  }


}


int main (){

  while(1) {
    cin >> n >> m;
    if(n == 0 && m == 0) break;
  
  for(int k=0;k<2;k++) 
    for(int i=0;i<=m;i++) 
      for(int j=0;j<=m;j++)
	mp[k][i][j] = INF;

	
  for(int i=0;i<n;i++){
  int a , b , cost,time;
  cin >> a >> b >> cost >> time;
  mp[0][a][b] = min(mp[0][a][b] ,cost);
  mp[0][b][a] = min(mp[0][b][a] ,cost);
  mp[1][a][b] = min(mp[1][a][b] ,time);
  mp[1][b][a] = min(mp[1][b][a] ,time);
  }

  int qu;
  cin >> qu;
  int p,q,r;

  for(int i=0;i<qu;i++) {
    cin >> p >> q >> r;

    int ans = visit(p,q,r);
    cout << ans << endl;
  }
  }
  
  return 0;
}