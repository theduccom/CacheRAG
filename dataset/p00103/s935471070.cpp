#include<stdio.h>
#include<string.h>
main(){
  int n;
  int out=0,hit=0,total_out=0;
  int point=0;
  char ibe[10];
  scanf("%d",&n);
  while(total_out!=3*n){
    scanf("%s",ibe);
    if(strcmp(ibe,"HIT")==0){
      hit++;
    }
    if(hit==4){
      point++;
      hit=3;
    }
    if(strcmp(ibe,"OUT")==0){
      out++;
      total_out++;
    }
    if(strcmp(ibe,"HOMERUN")==0){
      point+=hit+1;
      hit=0;
    }
    if(out==3){
      out=0;
      hit=0;
      printf("%d\n",point);
      point=0;
    }
  }
  return 0;
}