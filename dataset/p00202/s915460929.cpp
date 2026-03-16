#include<iostream>
using namespace std;
#define N 1000001


int main(){
  bool is_prime[N];
  for(int i=0;i<N;i++)
    is_prime[i] = false;

  for(int i=3;i<N;i+=2) is_prime[i] = true;
  is_prime[2] = true;
  for(int i=3;i<=1000;i+=2){
    if(is_prime[i]){
      for(int j=2*i;j<N;j+=i) is_prime[j] = false;
    }
  }

  int n,x;
  while(cin >> n >> x){
    if(n==0&&x==0) break;
    int v;
    bool dp[x+1];
    for(int i=0;i<=x;i++)
      dp[i] = false;

    for(int i=0;i<n;i++){
      cin >> v;
      dp[v] = true;
      for(int j=0;j<=x-v;j++){
        if(dp[j]) dp[j+v] = true;
      }
    }
    for(int i=x;i>=0;i--){
      if(i==0) cout << "NA" << endl;
      if(dp[i]&&is_prime[i]){
        cout << i << endl;
        break;
      }
    }
  }
  return 0;
}

