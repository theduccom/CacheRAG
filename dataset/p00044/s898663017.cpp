#include<iostream>
#include<math.h>
using namespace std;

int main(){
  bool is_prime[52000];
  is_prime[0]=false;is_prime[1]=false;
  for(int i=2;i<52000;i++)is_prime[i]=true;
  for(int i=2;i<=sqrt(51999);i++){
    if(is_prime[i]){
      for(int j=2;i*j<=51999;j++)is_prime[i*j]=false;
    }
  }

  int n;
  while(cin>>n){
    int index=n-1;
    while(!is_prime[index]){
      index--;
    }
    cout<<index<<' ';

    index=n+1;
    while(!is_prime[index]){
      index++;
    }
    cout<<index<<endl;
  }
}

