//A Thief
#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001];

int main(){
  int W, n=0;
  while(true){
    n++;
    cin>>W;
    if(W==0)break;
    for(int i=0; i<1001; i++)
      for(int j=0; j<1001; j++)
        dp[i][j]=0;
    int N;
    int v[1001], w[1001];
    cin>>N;
    for(int i=0; i<N; i++){
      scanf("%d,%d", &v[i], &w[i]);
    }
    for(int i=0; i<N; i++){
      for(int j=0; j<=W; j++){
        if(j<w[i]){
          dp[i+1][j]=dp[i][j];
        }
        else{
          dp[i+1][j]=max(dp[i][j], dp[i][j-w[i]]+v[i]);
        }
      }
    }
    cout<<"Case "<<n<<":"<<endl;
    cout<<dp[N][W]<<endl;
    int i;
    for(i=W; i>0; i--){
      if(dp[N][i]==dp[N][i-1])continue;
      else break;
    }
    cout<<i<<endl;
  }
  return 0;
}