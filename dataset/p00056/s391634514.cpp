#include<iostream>
using namespace std;

int main(){
  bool is_prime[1000000];

  is_prime[0]=is_prime[1]=false;
  for(int i=2;i<1000000;i++){
    is_prime[i]=true;
  }

  for(int i=2;i*i<1000000;i++){
    if(is_prime[i]){
      for(int j=i*i;j<1000000;j+=i){
          is_prime[j]=false;
        }
    }
  }
  int n;
  while(true){
    cin>>n;
    if(n==0){
      break;
  }
  int a=0,b=0,cnt=0;
  while(a<=n/2){
  while(is_prime[a]==false){
      a++;
  }
  if(a>n/2){
    break;
  }
  b=n-a;
  if(is_prime[b]==true){
    cnt++;
  }
  a++;
}
cout<<cnt<<endl;
}
}

