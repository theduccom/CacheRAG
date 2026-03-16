#include <stdio.h>

int main(void) {

  int a,b;
  int i,flag,ini=0;

  while(1) {

    scanf("%d %d",&a,&b);

    if(a==0 && b==0) {
      break;
    }

    flag=0;

    if(ini==1) puts("");
    else ini=1;

    for(i=a;i<=b;i++) {
      
      if((i%4==0 && i%100!=0) || i%400==0) {
	printf("%d\n",i);
	flag=1;
      }

    }

    if(flag==0) printf("NA\n");

    //printf("\n");
  }

  return 0;

}