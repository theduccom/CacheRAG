#include <stdio.h>

int main(){
  int n;
  int i;
  while(scanf("%d", &n)!=EOF){
    for(i=0;i<10;i++){
      if(n&1){
        printf("%d", 1<<i);
        if(n>>1) printf(" ");
      }
      n >>= 1;
    }
    printf("\n");
  }
  return 0;
}
    