#include <stdio.h>
int main(){

  int a,b,c,i;

  scanf("%d %d",&a,&b);

  while(1){

  c=0;
  if(a == 0) break;

  for(i = a; i <= b; i++){

    if(i%4 == 0){

      if(i%100 != 0){

        printf("%d\n",i);
        c++;

      }

      else if(i%400 == 0){

        printf("%d\n",i);
        c++;

      }

    }

  }

  if(c == 0) printf("NA\n");

  scanf("%d %d",&a,&b);
  if(a == 0) break;

  printf("\n");

  }

  return 0;

}