#include <stdio.h>
#include <math.h>

struct data {
  double d, w, h, n, r[10000];
} d[50];

int check(int i, double r) {
  int a, b, c;
  double t[2];
  int tp = 0;  
  for (a = 0; a <= 1; a++)
    for (b = 0; b <= 1; b++)
      for (c = 0; c <= 1; c++)
        if ((a + b + c) == 2) {
          tp = 0;
          if (a == 1)
            t[tp++] = d[i].d;
          if (b == 1)
            t[tp++] = d[i].w;
          if (c == 1)
            t[tp++] = d[i].h;                   
          if (sqrt(pow(t[0]/2, 2)  + pow(t[1]/2, 2)) <r)
            return 1;                    
        }
  return 0;
}

int main() {
  int i, j, n;
  for (i = 0;; i++) {
    scanf("%lf %lf %lf", &d[i].d, &d[i].w, &d[i].h);
    if (d[i].d == 0 && d[i].w == 0 && d[i].h == 0)
      break;
    scanf("%lf", &d[i].n);
    for (j = 0; j < d[i].n; j++)
      scanf("%lf", &d[i].r[j]);
  }
  n = i;
  for (i = 0; i < n; i++) {
    for (j = 0; j < d[i].n; j++) {
      if (check(i, d[i].r[j]) == 1)
        printf("OK\n");
      else
        printf("NA\n");
    }
  }
  return 0;
}