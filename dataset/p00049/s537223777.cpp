#include<stdio.h>

int main(void){
  int a,b,o,ab;
  int num;
  char type[3];

  a=0;
  b=0;
  o=0;
  ab=0;
  while(scanf("%d,%s ",&num,type)!=EOF){
    if(type[0] == 'A'){
      if(type[1] == 'B'){
	ab++;
      }else{
	a++;
      }
    }
    if(type[0] == 'B'){
      b++;
    }
    if(type[0] == 'O'){
      o++;
    }
  }

  printf("%d\n%d\n%d\n%d\n",a,b,ab,o);

  return 0;
}