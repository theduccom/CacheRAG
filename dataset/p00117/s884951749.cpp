#include<bits/stdc++.h>
using namespace std;
#define INF (1<<28)
typedef pair<int,int> P;
int cost1[25][25];
int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  
  for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
      if(i != j) cost1[i][j] = INF;
      else cost1[i][j] = 0;
    }
  }
  
  int a,b,c,d;
  for(int i=0;i<m;i++){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    cost1[a][b] = c;
    cost1[b][a] = d;
  }
  
  scanf("%d,%d,%d,%d",&a,&b,&c,&d);
  for(int k=1;k<=n;k++){ //経由するノード
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
	cost1[i][j] = min(cost1[i][j],cost1[i][k]+cost1[k][j]);
      }
    }
  }
  c-= cost1[a][b];
  for(int k=1;k<=n;k++){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
	cost1[j][i] = min(cost1[j][i],cost1[j][k]+cost1[k][i]);
      }
    }
  }
  
  cout << c-d-cost1[b][a] << endl;
  
  return 0;
}