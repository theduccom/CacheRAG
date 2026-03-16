//AOJ 0200

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<stack>
#include<queue>
#include<vector>
#include<list>
#include<deque>
using namespace std;
#define INF 1 << 20
#define MAX_B 101
 
int a, b, i, j, k, money[MAX_B][MAX_B], time[MAX_B][MAX_B], n, m, c, d;
bool judge;
stack<int> left, right;
 
 
int main(){
  while(1){
    scanf("%d %d", &n, &m);
    if(n == 0 && m == 0) return 0;
    for(i = 1; i <= m; i++){
      for(j = 1; j <= m; j++){
    money[i][j] = INF;
    time[i][j] = INF;
      }
    }
    for(i = 1; i <= m; i++){
      money[i][i] = 0;
      time[i][i] = 0;
    }
    for(i = 0; i < n; i++){
      scanf("%d %d %d %d", &a, &b, &c, &d);
      money[a][b] = c;
      money[b][a] = c;
      time[a][b] = d;
      time[b][a] = d;
    }
    scanf("%d", &a);
    for(i = 1; i <= m; i++){
      for(j = 1; j <= m; j++){
    for(k = 1; k <= m; k++){
      if(money[j][k] > money[j][i] + money[i][k]){
        money[j][k] = money[j][i] + money[i][k];
        money[k][j] = money[j][i] + money[i][k];
      }
      if(time[j][k] > time[j][i] + time[i][k]){
        time[j][k] = time[j][i] + time[i][k];
        time[k][j] = time[j][i] + time[i][k];
      }
    }
      }
    }
    for(i = 0; i < a; i++){
      scanf("%d %d %d", &b, &c, &d);
      if(d == 1)
    printf("%d\n", time[b][c]);
      if(d == 0)
    printf("%d\n", money[b][c]);
    }
  }
  return 0;
}