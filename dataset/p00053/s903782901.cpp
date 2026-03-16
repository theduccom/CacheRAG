#include <iostream>
using namespace std;

int isprime(int n){
  if(n<2)return 0;
  if(n==2)return 1;
  if(n%2==0)return 0;
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0)return 0;
  }
  return 1;
}

int main(){
  int a,n[10001]={0},k;
  k=0;
  for(int i=1;k<=10000;i++){
    if(isprime(i)){
      k++;
      n[k]=n[k-1]+i;
    }
  }
  while(cin>>a){
    if(a==0)break;
    cout<<n[a]<<endl;
  }
  return 0;
}