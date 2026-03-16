#include <stdio.h>

int main(void) {
  int l[10];
  while(scanf("%d", &l[0]) != EOF) {
  int sum, v1, v2, vs, now = 0, i, j;
  sum = l[0];
  for(i = 1; i < 10; ++i) {
    scanf(",%d", &l[i]);
    sum += l[i];
  }
  scanf(",%d,%d", &v1, &v2);
  vs = v1 + v2;
  double t = (double)sum / (double)vs;
  //printf("sum%d vs%d t%f\n", sum, vs, t);
  for(i = 0; i <= 10; ++i) {
    if(now >= t * v1) {
      printf("%d\n", i);
      break;
    }
    now += l[i];
  }
  }
  return 0;
}
