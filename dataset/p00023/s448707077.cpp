#include <stdio.h>

int main(void) {
  int n, i, j, k;
  scanf("%d", &n);
  for(i = 0; i < n; ++i) {
    double xa, ya, ra, xb, yb, rb, d, rs, rd;
    scanf("%lf%lf%lf%lf%lf%lf", &xa, &ya, &ra, &xb, &yb,&rb);
    d = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
    rs = (ra + rb) * (ra + rb);
    rd = (ra - rb) * (ra - rb);
    if(d > rs) printf("0\n");
    else if(rd <= d) printf("1\n");
    else if(ra > rb) printf("2\n");
    else printf("-2\n");
  }
  return 0;
}
