#include <cstdio>
#include <algorithm>
using namespace std;

double t;
double maxm, minm=10e9;

int main() {
  while (1) {
    if (scanf("%lf", &t) != 1) break;
    maxm = max(maxm, t);
    minm = min(minm, t);
  }
  printf("%f\n", maxm - minm);
}