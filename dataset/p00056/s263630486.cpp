#include <iostream>
using namespace std;

int main(){
  int isPrime[50001];
  fill(isPrime,isPrime+50001,1);
  isPrime[0] = isPrime[1] = 0;
  for(int i = 2 ; i*i < 50001 ; i++ ){
    if(isPrime[i])for(int j = i*2 ; j < 50001 ; j+=i )isPrime[j] = 0;
  }
  int n;
  while(cin >> n,n){
    int cnt = 0;
    for(int i = 0 ; i <= n/2 ; i++ ){
      if(isPrime[i] == 1 && isPrime[n-i] == 1)cnt++; 
    }
    cout << cnt << endl;
  }
  return 0;
}