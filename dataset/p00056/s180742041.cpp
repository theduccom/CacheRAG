#include <iostream>
using namespace std;
int prime[1000000];
int main(){
  fill(prime,prime + 1000000,1);
  prime[0] = prime[1] = 0;
  for(int i = 2 ; i*i < 1000000 ; i++ ){
    if(prime[i])for(int j = i*2 ; j < 1000000 ;j+=i )prime[j] = 0;
  }

  int p = 0;
  int n;
  while( cin >> n,n ){
    int cnt =0;
    for(int i = 0 ; i <= n/2 ; i++){
      if(prime[i] == 1 && prime[n-i] == 1)cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}