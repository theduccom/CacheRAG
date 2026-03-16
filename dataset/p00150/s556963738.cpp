#include<stdio.h>
const int size=10000;
int isprime(int n){
  int i;
  for(i=2;i*i<=n;i++){
    if(n%i==0)return 0;
  }
  return 1;
}
int main(){
  int i,n;
  int data[size]={1};
  for(i=2;i<size;i++){
    data[i]=isprime(i);
    //printf("%d %d\n",i,data[i]);
  }
  while(1){
    scanf("%d",&n);
    if(n==0)break;
    for(i=n;i>=0;i--){
      if(data[i]==1 && data[i-2]==1){
        break;
      }
    }
    printf("%d %d\n",i-2,i);
  }
  return 0;
}