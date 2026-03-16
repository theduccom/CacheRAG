#include<iostream>
#include<algorithm>
#include<cstdio>
#define INF 11111111
using namespace std;

int main(){

  int n,m;
  int a,b,c,d;
  int x,y,r,z;
  int cost[100][100];

  cin >> n >> m;

  for(int i=0;i<100;i++){
    for(int j=0;j<100;j++) cost[i][j] = INF;
  }

  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    cost[a][b] = c;
    cost[b][a] = d;
  }

  scanf("%d,%d,%d,%d",&x,&y,&r,&z);

  for(int k=1;k<=m;k++){
    for(int i=1;i<=m;i++){
      for(int j=1;j<=m;j++) cost[i][j] = min(cost[i][j],cost[i][k]+cost[k][j]);
    }
  }

  cout << r - z - cost[x][y] - cost[y][x] << endl;
}