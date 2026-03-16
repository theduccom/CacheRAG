#include <cstdio>
#include <algorithm>
using namespace std;
const int INF=100000000;
int dp[20][20];
int main(){
  for(int i=0;i<20;i++){
    for(int j=0;j<20;j++){
      if(i!=j) dp[i][j]=INF;
    }
  }
  int n,m,s,g,V,P;
  scanf("%d",&n);
  scanf("%d",&m);
  int a,b,c,d;
  while(m--){
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    a--;b--;
    dp[a][b]=c;
    dp[b][a]=d;
  }
  for(int k=0;k<n;k++){
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
      }
    }
  }
  scanf("%d,%d,%d,%d",&s,&g,&V,&P);
  s--;g--;
  int ans=V-P-dp[s][g]-dp[g][s];
  printf("%d\n",ans);
  return 0;
}