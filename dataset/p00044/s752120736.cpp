#include <iostream>
#include <bitset>
#include <cstdio>

using namespace std;

int main()
{
  bitset<60000> is_prime;
  is_prime.set();
  is_prime[0] = false, is_prime[1] = false;
  for (int i = 2; i * i <= 60000; i++) {
    for (int j = i + i; j  <= 60000; j += i) {
      is_prime[j] = false;
    }
  }

  int N;
  while (scanf("%d ", &N) == 1) {
    int d_m, u_m;
    for (int i = N - 1;; i--) {
      if (is_prime[i]) {
	d_m = i;
	break;
      }
    }
    for (int i = N + 1;; i++) {
      if (is_prime[i]) {
	u_m = i;
	break;
      }
    }
    printf("%d %d\n", d_m, u_m);
  }
  return 0;
}