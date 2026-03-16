#include <cstdio>
#include <algorithm>

using namespace std;

int dp[1000][1001],t[1000],w[1000];

int main(){
  for(int c=1;;c++){
    int n,q,i,j;
    scanf("%d",&q); if(q==0) break;
    scanf("%d",&n);

    for(i=0; i<n; i++)
      scanf("%d,%d",&t[i],&w[i]);

    for(i=0; i<=q; i++)
      dp[0][i] = (i>=w[0])?t[0]:0;

    for(i=1; i<n; i++)
      for(j=0; j<=q; j++){
	/*if(j+w[i]<=q)
	  dp[i][j+w[i]] = dp[i-1][j]+t[i];
	  dp[i][j] = max(dp[i][j],dp[i-1][j]);*/
	if(j>=w[i])
	  dp[i][j] = max(dp[i-1][j],dp[i-1][j-w[i]]+t[i]);
	else
	  dp[i][j] = dp[i-1][j];
      }

    int mw=0,mt=0;
    for(j=0; j<=q; j++)
      if(dp[n-1][j]>mt){
	mt = dp[n-1][j];
	mw = j;
      }

    /*    for(i=0; i<=q; i++)
      printf("%3d ",i);
      putchar('\n');
    for(i=0; i<n; i++){
      for(j=0; j<=q; j++)
	printf("%3d ",dp[i][j]);
      putchar('\n');
      }*/


    printf("Case %d:\n%d\n%d\n",c,mt,mw);
  }
}