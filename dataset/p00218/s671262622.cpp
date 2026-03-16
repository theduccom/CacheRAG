#include <cstdio>

int n;

main(){
  scanf("%d", &n);

  if(n==0) return 0;

  int m,e,j,s;
  while(n--){
    scanf("%d%d%d", &m, &e, &j);
    s = m+e+j;
    if(m == 100 || e == 100 || j == 100) puts("A");
    else if(m+e >= 180) puts("A");
    else if(s >= 240) puts("A");
    else if(s >= 210) puts("B");
    else if(s >= 150 && (m >= 80 || e >= 80)) puts("B");
    else puts("C");
  }

  main();
}