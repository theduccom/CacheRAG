#include <stdio.h>
#include <math.h>
int main() {int N;double x1,x2,y1,y2,r1,r2;while (scanf("%d",&N)!=EOF) {if (!N) return 0;while (N--) {scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&r1,&x2,&y2,&r2);double a1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));if (fabs(r1-r2)>a1) {if (r1>r2) puts("2"); else if (r1<r2) puts("-2"); else puts("1");} else {(a1<=r1+r2)?puts("1"):puts("0");}}}}