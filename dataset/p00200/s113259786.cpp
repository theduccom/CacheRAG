#include <iostream>
using namespace std;
const int INF = 1 << 22;
int main(){
  int n, m;
  while(true){
    cin >> n >> m;
    if(n == 0 && m == 0){
      break;
    }
    int cost[m+1][m+1], time[m+1][m+1];
    for(int i = 0; i < m+1; ++i){
      for(int j = 0; j < m+1; ++j){
        cost[i][j] = time[i][j] = INF;
      }
    }
    for(int i = 0; i < n; ++i){
      int a, b, c, t;
      cin >> a >> b >> c >> t;
      cost[a][b] = cost[b][a] = c;
      time[a][b] = time[b][a] = t;
    }
    // Warshall-Floyd
    for(int k = 0; k < m+1; ++k){
      for(int i = 1; i < m+1; ++i){
        for(int j = 1; j < m+1; ++j){
          cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
          time[i][j] = min(time[i][j], time[i][k] + time[k][j]);
        }
      }
    }
    int q_num;
    cin >> q_num;
    for(int i = 0; i < q_num; ++i){
      int p, q, r;
      cin >> p >> q >> r;
      if(r == 0){
        cout << cost[p][q] << endl;
      }
      else{
        cout << time[p][q] << endl;
      }
    }
  }    
  return 0;
}