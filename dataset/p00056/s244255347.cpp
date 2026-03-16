#include <iostream>
using namespace std;

bool isp(int n){
  if(n<2)return 0;
  if(n==2)return 1;
  if(n%2==0)return 0;
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0)return 0;
  }
  return 1;
}

int main(){
  int n[50001]={0},sum,a;
  for(int i=1;i<=50000;i++){
    if(isp(i)){
      n[i]=1;
    }
  }
  while(1){
    cin>>a;
    if(a==0)break;
    sum=0;
    for(int i=2;i<=a/2;i++){
      if(n[i]==1&&n[a-i]==1)sum++;
    }
    cout<<sum<<endl;
  }
  return 0;
}