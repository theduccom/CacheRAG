#include<stdio.h>

int main(void){
  int i=1;
  for(i;i<=9;i++){
    int j=1;
    for(j;j<=9;j++){
      printf("%dx%d=%d\n",i,j,(i*j));
    }
  }
}