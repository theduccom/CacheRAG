#include <iostream>
#include <cstdio>
#include <vector>
#include <bitset>

using namespace std;

#define MAX 1000000

int main()
{
  bitset<MAX + 1> is_prime;
  is_prime.set();
  is_prime[0] = false, is_prime[1] = false;
  for (int i = 2; i * i <= MAX; i++) {
    for (int j = i + i; j <= MAX; j += i) {
      is_prime[j] = false;
    }
  }
  vector<int> prime;
  for (int i = 0; i <= MAX; i++) {
    if (is_prime[i]) {
      prime.push_back(i);
    }
  }
  if (prime.size() < 10000) {
    printf("error\n");
    return 0;
  }

  int N;
  while (scanf("%d ", &N) == 1) {
    if (N == 0) {
      break;
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
      sum += prime[i];
    }
    printf("%d\n", sum);
  }
  return 0;
}