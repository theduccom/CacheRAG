//AOJ 0000
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
#define MAX_A 104
#define MAX_B 104

int a,  i, dp[MAX_A][MAX_B], max, j, b;

int sort(const void *a, const void *b){
  return *(int*)a - *(int*)b;
}

int main(){
  /*while(1){
    scanf("%d %d", &a, &b);
    if(a == 0 && b == 0) break;
    memset(dp, -1, sizeof(dp));
    for(i = 0; i < a + 2; i++){
      dp[i][0] = 0;
      dp[i][1] = 1;
    }
    for(i = 0; i < b + 2; i++){
      dp[0][i] = 0;
      dp[1][i] = 1;
    }
    dp[1][1] = 1;
    for(i = 2; i <= a; i++){
      for(j = 2; j <= b; j++){
	dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	if(i > 2 && j > 2) dp[i][j] -= 2;
	else if(i > 2 || j > 2) dp[i][j]--;
	}
    }
    printf("%d\n", dp[a][b] % 100000);
  }
  */
  for(i = 1; i <= 9; i++)
    for(j = 1; j <= 9; j++)
      printf("%dx%d=%d\n", i, j, i * j);
  return 0;
}