#include <iostream>
#define MAX_n 50001
using namespace std;
bool is_prime[51000];

void sieve() {

  for(int i=0;i<51000;i++) {
    is_prime[i] = true;
  }

  is_prime[0] = is_prime[1] = false;

  for(int i=2;i<51000;i++) {
    if(is_prime[i]) {
      for(int j=2*i;j<51000;j+=i) {
        is_prime[j] = false;
      }
    }
  }
}

int main() {
  int n;
  sieve();
  while(cin >> n) {
    for(int i=1;i<n;i++) {
      if(is_prime[n-i]) {
        cout << n-i << " ";
        break;
      }
    }

    for(int i=1;i<n;i++) {
      if(is_prime[n+i]) {
        cout << n+i << endl;
        break;
      }
    }
  }
}