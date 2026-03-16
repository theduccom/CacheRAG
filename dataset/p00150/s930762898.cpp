#include<stdio.h>
const int MAX_V = 10000;
int prime[MAX_V+1];
int main() {
  int i, k, v;
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

  while(scanf("%d", &v) != EOF) {
    if(v == 0){
      break;
    }
    while(1){
      if(prime[v] == 0 || prime[v - 2] == 0){
        v--;
      }else{
        printf("%d %d\n", v - 2, v);
        break;
      }
    }
  }
  return 0;
}