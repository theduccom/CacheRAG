#include <stdio.h>
const int MAX_V = 10000;
int prime[10000];
int main(){
int i, k, v ,n;
  for(i = 2; i <= MAX_V; i++) {
    prime[i] = 1;
  }
  for(i = 2; i*i <= MAX_V; i++) {
    if(prime[i]) {
      for(k = 2 * i; k <= MAX_V; k += i) {
        prime[k] = 0;
      }
    }
  }
  while(scanf("%d", &n)){
    if(n==0)break;
    int fir=0 , sec=0;
    for(i=n ;i>3 ;i--){
      if(prime[i] && prime[i-2]){
        fir=i-2;
        sec=i;
        break;
      }
    }
    printf("%d %d\n" ,fir ,sec);
  }
  return 0;
}