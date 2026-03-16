#include <stdio.h>

int quo,rem;

void divide_by_2(int x) {

  quo=x/2;
  rem=x%2;

}

int main(void) {

  int w;

  int count;

  while(scanf("%d",&w)!=EOF) {

    count=1;
    quo=w;

    while(quo>0) {

      divide_by_2(quo);
      
      if(rem==1) {
	
	if(quo==0) printf("%d\n",count);
	else printf("%d ",count);

      }

      count*=2;

    }

    //printf("\n");

  }

  return 0;

}