#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
  int N, M;
  int sum_N = 0, sum_M = 0,  c = 0;
  while (scanf("%d,%d ", &N, &M) == 2) {
    sum_N += N * M, sum_M += M;
    c++;
  }
  printf("%d\n%d\n", sum_N, (int)((double)sum_M / c + 0.5));
  return 0;
}