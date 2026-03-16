#include <iostream>
#include <algorithm>
#define MAX_N 20
#define INF 1e9
using namespace std;

int dp[MAX_N][MAX_N];
int n,m;

void warshall_froyd(){
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
      }
    }
  }
}

int main(){
  cin >> n; 
  cin >> m;
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      dp[i][j] = (i==j ? 0 : INF);
    }
  }
  
  char camma;
  for(int i=0;i<m;i++){
    int a,b,atob,btoa;
    cin >> a >> camma >> b >> camma >> atob >> camma >> btoa;
    a--; b--;
    dp[a][b] = atob; dp[b][a] = btoa;
  }

  warshall_froyd();

  int start,goal,reward,price;
  cin >> start >> camma >> goal >> camma >> reward >> camma >> price;
  start--; goal--;
  cout << reward - dp[start][goal] - dp[goal][start] - price << endl;
  return 0;
}