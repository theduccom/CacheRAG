#include <stdio.h>
main(){
  int a,b,c;
  a=1;
  b=1;
  while(a<10){
    while(b<10){
      c=a*b;
      printf("%dx%d=%d\n",a,b,c);
      b++;
    }
    b=1;
    a++;
  }
return 0;
}