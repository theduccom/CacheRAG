#include<iostream>
using namespace std;

int main(){
  bool  prime[100000];
  for(int i=0;i<100000;i++){
    prime[i]=true;
  }
  prime[0]=prime[1]=false;
  for(int i=2;i<=1000;i++){
    for(int j=i*2;j<100000;j+=i){
      prime[j]=false;
    }
  }
  int n;
  int cnt1,cnt2;
  while(cin>>n){
    for(int i=0;i<n;i++){
      if(prime[i])cnt1=i;
    }
    for(int i=n+1;;i++){
      if(prime[i]){
	cnt2=i;
	break;
      }
    }
    cout<<cnt1<<" "<<cnt2<<endl;
  }
  return 0;
}