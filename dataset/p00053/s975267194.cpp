#include <iostream>
using namespace std;

bool prime[1000000];

int main(void) {
  for (int i = 0; i < 1000000; i++) {
    prime[i] = true;
  }
  prime[0] = prime[1] = false;
  for (int i = 2; i*i < 1000000; i++) {
    if (prime[i] == true) {
      for (int j = 2; i*j < 1000000; j++) {
        prime[i*j] = false;
      }
    }
  }

  while (1) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }

    long long sum = 0;
    for (int i = 0; n > 0 && i < 1000000; i++) {
      if (prime[i]) {
        sum += i;
        n--;
      }
    }  
    cout << sum << endl;
  }
  
  return 0;
}