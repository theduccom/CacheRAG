#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
  int w,n,a,b,ca=0;
  
  while(scanf("%d",&w) && w != 0){
    scanf("%d",&n);
    int dp[n+1][w+1];
    fill_n(*dp,(n+1)*(w+1),0);

    for(int i = 1;i <= n;i++){
      scanf("%d,%d",&a,&b);
	for(int j = 0;j <= w;j++){
	  if(j < b) dp[i][j] = dp[i-1][j];
	  else dp[i][j] = max(dp[i-1][j],dp[i-1][j-b]+a);
	}
      }
    
    ca++;
    printf("Case %d:\n",ca);
    printf("%d\n",dp[n][w]);
    for(int i = w-1;i >= 0;i--){
      if(dp[n][w] != dp[n][i]){
	printf("%d\n",i+1);
	break;
      }
    }
  }    
  
  return (0);
}