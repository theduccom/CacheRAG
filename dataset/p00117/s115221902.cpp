#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define INF (1 << 29)

int main(){
  int n, m;
  int cost[21][21];
  int a, b, c, d;
  
  for(int i = 0 ; i < 21 ; i++){
    for(int j = 0 ; j < 21 ; j++){
      cost[i][j] = INF;
      if(i == j) cost[i][j] = 0;
    }
  }
      
  cin >> n >> m;
  while(m--){
    scanf("%d,%d,%d,%d", &a, &b, &c, &d);
    cost[a][b] = c;
    cost[b][a] = d;
  }
  
  for(int k = 1 ; k <= n ; k++){
    for(int i = 1 ; i <= n ; i++){
      for(int j = 1 ; j <= n ; j++){
	cost[i][j] = min(cost[i][j], cost[i][k]+cost[k][j]);
      }
    }
  }
  
  int x1, x2, y1, y2;
  scanf("%d,%d,%d,%d", &x1, &x2, &y1, &y2);
  
  cout << y1 - y2 - cost[x1][x2] - cost[x2][x1] << endl;
}