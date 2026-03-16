#include <stdio.h>
const int MAX_V = 1000000;
int prime[MAX_V+1];
int main(){
  int n;
  for(int i = 2;i <= MAX_V;i++){
    prime[i] = 1;
  }
  for(int i = 2;i * i <= MAX_V;i++){
    if(prime[i]){
      for(int k = 2* i;k <= MAX_V;k += i)
      prime[k]=0;
    }
  }
  while(1){
    scanf("%d",&n);
    if(n == 0)break;
    for(int i = n; i > 3; i--){
      if(prime[i] == 1 && prime[i-2] == 1){
        printf("%d %d\n",i-2,i);
        break;
      }
    }
  }
  return 0;
}