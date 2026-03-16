#include<bits/stdc++.h>
using namespace std;
const int INF = 1 << 28;

vector< bool > get_prime(int n){
  vector< bool > prime( n + 1, true);
 
  if(n >= 0) prime[0] = false;
  if(n >= 1) prime[1] = false;
 
  for(int i = 2; i * i <= n; i++){
    if(prime[i]){
      for(int j = i + i; j <= n; j += i) prime[j] = false;
    }
  }
 
  return prime;
}

int main(){
  int n, x;
  while(cin >> n >> x, n){
    vector< int > food(n);
    for(int i = 0; i < n; i++){
      cin >> food[i];
    }
    vector< bool > dp(x + 1, false);
    dp[0] = true;
    for(int i = 0; i <= x; i++){
      if(dp[i]){
        for(int j = 0; j < n; j++){
          if(i + food[j] > x) continue;
          dp[i + food[j]] = true;
        }
      }
    }
    vector< bool > prime = get_prime(x);
    int ret = -1;
    for(int i = x; i >= 0; i--){
      if(prime[i] && dp[i]){
        ret = i;
        break;
      }
    }
    if(~ret) cout << ret << endl;
    else cout << "NA" << endl;
  }
}