#include<stdio.h>
int main(void){
  int i,j,s=0;
  for(i=1;i<10;i++){
    for(j=1;j<10;j++){
      s=i*j;
      printf("%dx%d=%d\n",i,j,s);
    }
  }
  return 0;
}