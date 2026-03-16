#include <stdio.h>
int isprime(int n){
  for(int i = 2 ; i*i<=n ;i++){
    if(n%i==0)return 0;
}
 return 1;
}
int main(){
  int number[10000+2]={0};
  int n ,i , fir ,sec;
  for(i=2 ; i<10000 ;i++){
    number[i] = isprime(i);
  }
  while(scanf("%d" ,&n)){
    if(n==0)break;
    fir = 0 ,sec = 0;
    for(i=n ;i>3 ;i--){
      if(number[i] && number[i-2]){
        fir = i-2;
        sec = i;
        break;
      }
    }
    printf("%d %d\n" ,fir ,sec);
  }
  return 0;
}