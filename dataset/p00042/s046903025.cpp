#include<bits/stdc++.h>
using namespace std;
/* 変数名を被らせない
   デバッグコードを取り除く */
#define ANSWER(x) cout<<x<<endl
#define debug(x) cout<<#x<<": "<<x
const int MAX_INT = 1000000;
int n,w,ans,cnt=1;
int value[1001],weight[1001],dp[1001][1001];;
int solve(int a,int b);
int main(){
  while(1){
    memset(dp,-1,sizeof(dp));
    cin >> w;
    if(w==0)break;
    cin >> n;
    for(int i=0;i<n;i++){
      scanf("%d,%d",&value[i],&weight[i]);
    }
    ans = solve(0,w);
    for(int i=0;i<=w;i++){
      if(solve(0,i) == ans){
	cout <<"Case " << cnt <<':' << endl <<  ans <<endl << i << endl;
	break;
      }
    }
    cnt++;
  }
}
int solve(int a,int b){
  if(dp[a][b] != -1)return dp[a][b];
  if(a == n)return 0;
    
  else if(b < weight[a])return dp[a][b] = solve(a+1,b);
  else return dp[a][b] = max(solve(a+1,b-weight[a])+value[a],solve(a+1,b));
}