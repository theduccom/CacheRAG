#include <iostream>
using namespace std;
#define MAX_N 50000

bool isPrime[MAX_N + 1];
int n, cnt;

void seive(){
  for(int i = 0; i <= MAX_N; i++) isPrime[i] = true;
  isPrime[0] = isPrime[1] = false;
  for(int i = 2; i * i <= MAX_N; i++){
    if(isPrime[i]){
      for(int j = i * i; j <= MAX_N; j += i) isPrime[j] = false;
    }
  }
}

int main(void){
  seive();
  while(true){
    cin >> n;
    if(n == 0) break;
    cnt = 0;
    for(int i = 2; i <= n / 2; i++){
      if(isPrime[i] && isPrime[n-i]) cnt++;
    }
    cout << cnt << endl;
  }
  return 0;
}