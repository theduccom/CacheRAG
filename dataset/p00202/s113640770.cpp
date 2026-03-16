#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

int main(){

  int n, x;
  int p[1111111];
  int data[33];
  bool dp[1111111];

  memset(p, -1, sizeof(p));
  p[0] = p[1] = 0;
  for(int i=2;i*i<1111111;i++) if(p[i]) for(int j=i+i;j<1111111;j+=i) p[j] = 0;

  while(scanf("%d %d", &n, &x), n){
    
    memset(dp, 0, sizeof(dp));
    dp[0] = true;
    for(int i=0;i<n;i++){
      scanf("%d", &data[i]);
      for(int j=data[i];j<=x;j++) if(dp[j-data[i]]) dp[j] = true;
    }
    
  int ans = 0;
  for(int i=0;i<=x;i++) if(p[i] & dp[i]) ans = i;

  if(!ans) cout << "NA\n";
  else cout << ans << endl;

  }

}