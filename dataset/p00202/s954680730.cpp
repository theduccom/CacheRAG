#include <bits/stdc++.h>
using namespace std;

int n,x;
int m[50];
bool dp[1000001];

bool isprime(int num){
  if(num<=1) return 0;
  for(int i=2;i*i<=num;i++){
    if(num%i==0) return 0;
  }
  return 1;
}


int main(){
  while(cin>>n>>x && (n||x)){
    for(int i=0;i<n;i++) cin>>m[i];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=0;i<n;i++){
      for(int j=0;j<=x;j++){
	if(dp[j] && j+m[i]<=x) dp[j+m[i]]=1;
      }
    }
    int ans=0;
    for(int i=x;i>=0;i--) {
      if(dp[i] && isprime(i) ){
	ans=i;
	break;
      }
    }
    if(ans==0) cout<<"NA"<<endl;
    else cout<<ans<<endl;
	
  }
  
  return 0;
}