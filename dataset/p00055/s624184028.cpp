#include <stdio.h>

int main(void) {
  double a, be, ans;
  int i;
  while(scanf("%lf", &a) != EOF) {
    be = a, ans = a;
    for(i = 1; i < 10; ++i) {
      if(i % 2) be *= 2.0;
      else be /= 3.0;
      ans += be;
    }
    printf("%.12lf\n", ans);
  }
  return 0;
}
