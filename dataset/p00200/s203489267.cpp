#include <iostream>
#include <algorithm>
#define MAX_M 100
#define INF 1e9
using namespace std;

int dp_cost[MAX_M][MAX_M];
int dp_time[MAX_M][MAX_M];
int m;

void warshall_froyd(){
  for(int k=0;k<m;k++){
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        dp_cost[i][j] = min(dp_cost[i][j], dp_cost[i][k] + dp_cost[k][j]);
        dp_time[i][j] = min(dp_time[i][j], dp_time[i][k] + dp_time[k][j]);
      }
    }
  }
}

int main(){
  int n;
  
  while(cin >> n >> m){
    if(n == 0 && m == 0) break;
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        dp_time[i][j] = (i==j ? 0 : INF);
        dp_cost[i][j] = (i==j ? 0 : INF);
      }
    }
    
    for(int i=0;i<n;i++){
      int a,b,cost,time;
      cin >> a >> b >> cost >> time;
      a--;
      b--;
      dp_cost[a][b] = cost; dp_cost[b][a] = cost;
      dp_time[a][b] = time; dp_time[b][a] = time;
    }
    
    warshall_froyd();
    
    int k,p,q,r;
    cin >> k;
    for(int i=0;i<k;i++){
      cin >> p >> q >> r;
      p--; q--;
      cout << (r == 0 ? dp_cost[p][q] : dp_time[p][q]) << endl;
    }
  }
  return 0;
}