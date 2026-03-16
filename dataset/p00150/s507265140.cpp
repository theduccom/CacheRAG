#include <stdio.h>
int isprime(int n){
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0)return 0 ;
  }
  return 1;
}
int main(){
  int n;
  while(1){
    scanf("%d",&n);
    if(n == 0)break;
    for(int i = n; i > 3; i--){
      if(isprime(i) == 1 && isprime(i-2) == 1){
        printf("%d %d\n",i-2,i);
        break;
      }
    }
  }
  return 0;
}