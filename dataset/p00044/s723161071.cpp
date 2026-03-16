#include <stdio.h>

int isprime(int x){
  if(!(x&1)) return 0;
  
  int i;
  for(i=3;i*i<x;i+=2){
    if(!(x%i)) return 0;
  }
  return 1;
}

int main(){
  int n;
  while(scanf("%d", &n)!=EOF){
    int i;

    int bottom=2;
    for(i=n-1;i>=2;i--) if(isprime(i)) bottom = i,i=0;

    int upper=0;
    for(i=n+1;i<=60000;i++) if(isprime(i)) upper=i,i=70000;

    printf("%d %d\n", bottom, upper);
  }
}