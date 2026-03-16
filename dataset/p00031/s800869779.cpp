#include <stdio.h>

int main(void) {
  int i, j, k, w;
  while( scanf("%d", &w) != EOF ) {
    int now = 1, f = 1;
    while(w) {
       if(w % 2) {
         if(f) {
           printf("%d", now);
           f = 0;
         } else printf(" %d", now);
       }
       w /= 2, now *= 2;
    }
    printf("\n");
  }
  return 0;
}
