#include <stdio.h>

int isLeap(int y) {
  if(y%4==0) {
    if(y%400==0) return 1;
    else if(y%100==0) return 0;
    return 1;
  } else return 0;
}

main() {
  int fst=0;
  int cnt;
  int i,a,b;
  while(scanf("%d %d",&a,&b),a!=0&&b!=0) {
    if(!fst) fst++;
    else puts("");
    cnt=0;
    for(i=a;i<=b;i++) {
      if(isLeap(i)) {printf("%d\n",i);cnt++;}
    }
    if(cnt==0) puts("NA");
  }
}