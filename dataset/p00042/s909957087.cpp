#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
  int index = 1;
  while (true) {
    int W;
    scanf("%d ", &W);
    if (W == 0) {
      break;
    }
    int N;
    scanf("%d ", &N);
    vector<int> dp(W + 1, -1);
    for (int i = 0; i < N; i++) {
      int value, weight;
      scanf("%d,%d ", &value, &weight);
      //printf("%d,%d\n", value, weight);

      for (int j = W; j >= 0; j--) {
	if (dp[j] >= 0 && j + weight <= W) {
	  dp[weight + j] = max(dp[weight + j], dp[j] + value);
	}
      }
      dp[weight] = max(dp[weight], value);
      /*for (int i = 0; i <= W; i++) {
	if (dp[i] >= 0) {
	  printf("dp:%d, %d\n", i, dp[i]);
	}
      }
      printf("\n");*/
    }
    int max_weight = 0, max_value = -1;
    for (int i = 0; i <= W; i++) {
      if (max_value < dp[i]) {
	max_weight = i;
	max_value = dp[i];
      }
    }
    printf("Case %d:\n%d\n%d\n", index++, max_value, max_weight);
  }
  return 0;
}