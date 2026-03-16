#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
  int e, c, sum, num, n;
  sum = num = n = 0;
  while(scanf("%d,%d", &e, &c) != EOF) {
    ++n;
    sum += e*c;
    num += c;
  }
  printf("%d\n%d\n", sum, (int)((double)num/n+0.5));
  return 0;
}