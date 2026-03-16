#include<iostream>
#include<algorithm>
#include<cmath>
#define N 50000

using namespace std;

int main(){

  int prime[N+1], n;

  fill(prime, prime+N+1, 1);
  prime[0] = 0;
  prime[1] = 0;
  for(int i=2; i<=N; i++){
    if(prime[i] == 1){
      for(int j=2; i*j<=N; j++){
        prime[i*j] = 0;
      }
    }
  }

  int cnt, m;
  while(cin >> n){
    if(n == 0) break;
    cnt = 0;
    m = ceil((double)n / 2);
    for(int i=n-2; i>=m; i--){
      if(prime[i] == 1 && prime[n-i] == 1) cnt++;
    }
    
    cout << cnt << endl;

  }

  return 0;

}