#include<stdio.h>

int isprime(int n){
  int i;
  for(i = 2; i * i <= n; i++){
    if(n % i == 0){
      return 0;
    }
  }
  return 1;
}

int main(){
  int k, n, ans, dif;
  while(1){
    scanf("%d", &n);
    if(n == 0){
      break;
    }
    for(k = n; k >= 2; k--){
      ans = isprime(k);
      if(ans == 1){
        dif = isprime(k - 2);
        if(dif == 1){
          printf("%d %d\n", k - 2, k);
          break;
        }
      }
    }
  }
  return 0;
}