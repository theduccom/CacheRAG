#include <cstdio>

int main() {
  int m, n;
  int price = 0, sum = 0, cnt = 0;

  while (scanf("%d,%d", &m, &n) != EOF) {
        price += m*n;
        sum += n;
        cnt++;
  }
  int ave = (float)sum/cnt + 0.5;
  printf("%d\n%d\n", price, ave);

  return 0;
}