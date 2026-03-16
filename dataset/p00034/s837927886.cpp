#include <iostream>
using namespace std;
int L[10], v1, v2, sum;
int main() {
  while (~scanf("%d", &L[0])) {
    sum = L[0];
    for (int i = 1; i < 10; i++) {
      scanf(",%d", &L[i]);
      sum += L[i];
    }
    scanf(",%d,%d", &v1, &v2);
    double p = (double)v1 * sum / (v1 + v2);
    double d = 0.0;
    for (int i = 0; i < 10; i++) {
      d += L[i];
      if (d >= p) {
        printf("%d\n", i + 1);
        break;
      }
    }
  }
}
