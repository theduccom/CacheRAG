#include <iostream>
#define MAX_N 1000
#define MAX_W 10000

using namespace std;

main(){
  int W, n;
  int v[MAX_N], w[MAX_N];
  int dp[2][MAX_W+1];

  for(int count=1;;count++){
    cin >> W;
    if(W==0) break;

    cin >> n;
    for(int i=0;i<n;i++){
      scanf("%d,%d", &v[i], &w[i]);
    }
    for(int i=0;i<=W;i++){
      dp[0][i]=0;
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<=W;j++){
	if(j<w[i]){
	  dp[(i+1)&1][j]=dp[i&1][j];
	}else{
	  dp[(i+1)&1][j]=max(dp[i&1][j], dp[i&1][j-w[i]]+v[i]);
	}
      }
    }
    int ans;
    for(int i=0;i<=W;i++){
      if(dp[n&1][W]==dp[n&1][i]){
	ans=i;
	break;
      }
    }
    printf("Case %d:\n", count);
    cout << dp[n&1][W] << endl;
    cout << ans << endl;
  }
  return 0;
}