#include<bits/stdc++.h>
using namespace std;
int n;
int memo[10001];
bool isPrime(int x) {
  if(memo[x]>=0) return memo[x];
  for(int i=2; i*i<=n; i++) {
    if(x % i == 0) return memo[x] = 0;
  }
  return memo[x] = 1;
}

int main() {
  fill(memo, memo+10000, -1);
  while(cin >> n && n) {
    int mx = 5;
    for(int i=2; i<=n-2 ; i++) {
      if((isPrime(i)&isPrime(i+2)) == 1) {
	mx = i;
      }
    }
    cout << mx << ' ' << mx+2 << endl;
  }
  
  return 0;
}