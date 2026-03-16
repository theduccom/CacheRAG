#include <iostream>
using namespace std;

bool is_prime[1000001];

void sieve() {
  for(int i=0;i<1000001;i++) {
    is_prime[i] = true;
  }

  is_prime[0]=is_prime[1]=false;

  for(int i=2;i<1000001;i++) {
    if(is_prime[i]) {
      for(int j=2*i;j<1000001;j+=i) {
        is_prime[j]=false;
      }
    }
  }
}

int solve(int n) {
  int times=0;
  int sum=0;
  for(int i=2;times<n;i++) {
    if(is_prime[i]) {
      times++;
      sum += i;
    }
  }
  return sum;
}

  int main() {
    int n;
    sieve();
    while(cin >> n) {
      if(n==0) break;
      cout << solve(n) << endl;
    }
  }