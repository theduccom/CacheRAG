#include <stdio.h>

void swap(int* a,int* b);

int main(void) {

  int flag1=1,flag2=0,flag3=0;

  char left,right;

  while(scanf("%c,%c",&left,&right)!=EOF) {

    switch(left) {
      
    case 'A':
      if(right=='B') swap(&flag1,&flag2);

      if(right=='C') swap(&flag1,&flag3);
      
      break;

    case 'B':
      if(right=='A') swap(&flag1,&flag2);

      if(right=='C') swap(&flag2,&flag3);

      break;

    case 'C':
      if(right=='A') swap(&flag1,&flag3);

      if(right=='B') swap(&flag2,&flag3);

      break;

    }

  }

  if(flag1==1) printf("A\n");

  if(flag2==1) printf("B\n");

  if(flag3==1) printf("C\n");

  return 0;

}

void swap(int* a,int* b) {

  *a=*a^*b;
  *b=*a^*b;
  *a=*a^*b;

}