#include <iostream>
using namespace std;

bool is_prime[10001];

int main() {
  int n,p1,q1;
  for(int i=0;i<10001;i++) {
    is_prime[i] = true;
  }

  is_prime[0] = is_prime[1] = false;

  for(int i=2;i<10001;i++) {
    if(is_prime[i]) {
      for(int j=2*i;j<10001;j+=i) {
        is_prime[j] = false;
      }
    }
  }

  while(cin >> n) {

    if(n==0) break;

    for(int i=0;i<10001;i++) {
      if(is_prime[n-i]) {
        q1 = n-i;
        if(is_prime[n-i-2]) {
          p1 = n-i-2;
          break;
        }
      }
    }
    printf("%d %d\n",p1,q1);
  }
}