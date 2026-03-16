#include <iostream>
#include <cstdio>
#include <vector>
#include <bitset>

using namespace std;

int main()
{
  double a;
  while (scanf("%lf ", &a) == 1) {
    double cur = a;
    double sum = a;
    for (int i = 0; i < 9; i++) {
      if (i % 2 == 0) {
	sum += cur * 2;
	cur *= 2;
      } else {
	sum += cur / 3;
	cur /= 3;
      }
    }
    printf("%lf\n", sum);
  }
  return 0;
}