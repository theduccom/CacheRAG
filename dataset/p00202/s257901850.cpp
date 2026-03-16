#include <iostream>
#define N 30
#define N1 1000001
using namespace std;
void DP();
int n,x,c[N];
bool prime[N1];
int main(){
  int i,j;
  for(i=0;i<=N1;i++) prime[i]=true;
  prime[0]=prime[1]=false;
  for(i=0;i<N1;i++){
    if(prime[i]==true){
      for(j=i*2;j<N1;j+=i){
	prime[j]=false;
      }
    }
  }
  while(1){
    cin >> n >> x;
    if(n==0&&x==0) break;
    for(i=0;i<n;i++){
      cin >> c[i];
    }
    DP();
  }
  return 0;
}
void DP(){
  int dp[N1],flag,ans,i,j;
  for(i=0;i<N1;i++) dp[i]=0;
  dp[0]=1;
  for(i=1;i<N1;i++){
    if(i%c[0]==0) dp[i]=1;
  }
  for(i=1;i<n;i++){
    for(j=1;j<N1;j++){
      if(dp[j]==0&&j>=c[i]){
	if(dp[j-c[i]]==1) dp[j]=1;
      }
    }
  }
  flag=0;
  for(i=x;i>=1;i--){
    if(dp[i]==1&&prime[i]==true){
      ans=i;
      flag=1;
      break;
    }
  }
  if(flag==1) cout << ans << endl;
  else cout << "NA" << endl;
}