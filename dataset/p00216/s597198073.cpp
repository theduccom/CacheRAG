#include<stdio.h>
#define N 10000

int main(void){
  int i,num;
  int w,fee[N];
  for(i=0;;i++){
    scanf("%d",&w);
    if(w==-1)
      break;
    fee[i]=1150;
    if(w-10<=0)
      continue;
    w-=10;
    if(w-10<=0){
      fee[i]+=w*125;
      continue;
    }
    fee[i]+=1250;
    w-=10;
    if(w-10<=0){
      fee[i]+=w*140;
      continue;
    }
    fee[i]+=1400;
    w-=10;
    fee[i]+=w*160;
  }
  num=i;
  for(i=0;i<num;i++){
    printf("%d\n",4280-fee[i]);
  }
  return 0;
}