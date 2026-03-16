#include <stdio.h>
const int MAX_V = 1000000;
int prime[MAX_V+1];
int sum, x, y, ans;
int main(){
 int i, k, v, n, left, right;
 for(i = 2; i <= MAX_V; i++){
  prime[i] = 1;
 }
 for(i = 2; i*i <= MAX_V; i++){
  if(prime[i]){
   for(k = 2 * i; k <= MAX_V; k += i){
    prime[k] = 0;
   }
  }
 }
 while(1){
  scanf("%d", &n);
  if(n == 0) break;
  for(i = 0; i<=n-2; i++){
   x = prime[i];
   y = prime[i + 2];
   if(x == 1 && y == 1){
    ans = i;
   }
  }
  printf("%d %d\n", ans, ans+2);
 }
 return 0;
}