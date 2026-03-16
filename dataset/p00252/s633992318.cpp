#include<stdio.h>
int main(){
  int b[3];
  scanf("%d %d %d", &b[0], &b[1], &b[2]);
  if ( b[0] && b[1] || b[2] ){//どれか１だったら
    printf("Open\n");
  }else{
    printf("Close\n");
  }
  return(0);
} 

