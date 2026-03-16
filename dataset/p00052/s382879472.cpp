#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int N;
  while (scanf("%d ", &N) == 1) {
    if (N == 0) {
      break;
    }
    int s = 5, sum = 0;
    while (N / s > 0) {
      sum += N / s;
      s *= 5;
    }
    printf("%d\n", sum);
  }
  return 0;
}