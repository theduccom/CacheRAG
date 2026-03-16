#include<iostream>
#include<math.h>
using namespace std;



int main(){
  bool is_prime[50001];
  is_prime[0]=false;is_prime[1]=false;
  for(int i=2;i<50001;i++)is_prime[i]=true;
  for(int i=2;i<=sqrt(50001);i++){
    if(is_prime[i]){
      for(int j=2;i*j<=50001;j++)is_prime[i*j]=false;
    }
  }


  int n;
  while(1){
    cin>>n;
    if(n==0)break;
    int cnt=0;

    for(int i=2;i<=n/2;i++){
      if(is_prime[i]){
        if(is_prime[n-i])cnt++;
      }
    }
    cout<<cnt<<endl;
  }
}

