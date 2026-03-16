#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
  int n,weight;
  int v[1000],w[1000];
  int dp[1001];
  int m,mw;
  int cnt = 0;

  while(1){
    cnt++;
    cin >> weight;
    if(!weight)break;

    cin >> n;
    for(int i=0;i<n;i++)scanf("%d,%d ",&v[i],&w[i]);


    dp[0] = 0;
    for(int i=1;i<=weight;i++)dp[i] = -1;
    
    for(int i=0;i<n;i++){
      for(int j=weight;j>=0;j--){
	if(dp[j]>=0 && j+w[i]<=weight)dp[j+w[i]] = max(dp[j+w[i]],dp[j]+v[i]);
      }
    }

    m = dp[0];
    mw = 0;
    for(int i=1;i<=weight;i++){
      if(m < dp[i]){
	m = dp[i];
	mw = i;
      }
    }
    cout << "Case " << cnt << ":\n";
    cout << m  << endl;
    cout << mw << endl;
  } 
}