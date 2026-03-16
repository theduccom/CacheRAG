#include <stdio.h>

int main(void) {

  int price,quantity;
  int amount=0;
  double sum=0.0;
  int average;
  double i=0.0;

  while(scanf("%d,%d",&price,&quantity)!=EOF) {
    amount+=price*quantity;
    sum=sum+(double)quantity;
    i=i+1.0;
    if(i==3.0) break;
  }
 
  average=(int)((sum/i)+0.5);

  printf("%d\n%d\n",amount,average);

  return 0;
}