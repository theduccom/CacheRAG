#include <iostream>
#include <cstdio>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
  bitset<60001> is_prime;
  is_prime.set();
  is_prime[0] = false, is_prime[1] = false;
  for (int i = 2; i * i <= 60000; i++) {
    for (int j = i + i; j <= 60000; j += i) {
      is_prime[j] = false;
    }
  }
  vector<int> prime;
  for (int i = 0; i <= 60000; i++) {
    if (is_prime[i]) {prime.push_back(i);}
  }

  int n;
  while (scanf("%d ", &n) == 1) {
    if (n == 0) {break;}
    int c = 0;
    for (int i = 0; i < prime.size(); i++) {
      if (prime[i] > n / 2) {break;}
      if (is_prime[n - prime[i]]) {c++;}
    }
    printf("%d\n", c);
  }
  return 0;
}