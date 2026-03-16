#include<cstdio>
#include<algorithm>
using namespace std;

#define INF (1<<12)

typedef struct{
  int cost,time;
}T;

int n,m;
T dp[111][111];

void init();
void warshall();

int main(){
  int a,b,cost,time;
  int k;
  int p,q,r;
  
  while(true){
    
    scanf(" %d %d",&n,&m);
    if(n == 0 && m == 0)break;
    
    // 初期処理
    init();
    
    for(int i=0;i<n;i++){
      scanf(" %d %d %d %d",&a,&b,&cost,&time);
      dp[a][b].cost = cost;
      dp[a][b].time = time;
      dp[b][a].cost = cost;
      dp[b][a].time = time;
    }
    
    warshall();
    
    scanf(" %d",&k);
    for(int i=0;i<k;i++){
      scanf(" %d %d %d",&p,&q,&r);
      if(r){
	printf("%d\n",dp[p][q].time);
      } else {
	printf("%d\n",dp[p][q].cost);
      }
    }
  }
  
  return 0;
}

void init(){
  
  for(int i=0;i<=m;i++){
    for(int j=0;j<=m;j++){
      if(i==j){
	// 今いるところから今いるところまではcost,timeともに0
	dp[i][j].cost = 0;
	dp[i][j].time = 0;
      } else {
	// 他はINF
	dp[i][j].cost = INF;
	dp[i][j].time = INF;
      }
    }
  }
  
  return;
}

void warshall(){
  
  for(int k=1;k<=m;k++){
    for(int i=1;i<=m;i++){
      for(int j=1;j<=m;j++){
	dp[i][j].cost = min(dp[i][j].cost,dp[i][k].cost + dp[k][j].cost);
	dp[i][j].time = min(dp[i][j].time,dp[i][k].time + dp[k][j].time);
      }
    }
  }
  
  return;
}