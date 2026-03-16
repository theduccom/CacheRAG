#include <iostream>
using namespace std;

int main(){
  const int NUM = 1e6;
  bool prime[NUM];
  for(int i=2;i<NUM;i++)
    prime[i] = true;
  for(int i=2;i*i<NUM;i++)
    for(int k=2;i*k<NUM;k++)
      prime[i*k]=false;
  int n,c;
  while(cin>>n){
    if(!n)break;c=0;
    for(int i=2,k=0;k<n;i++)if(prime[i])c+=i,k++;
    cout<<c<<endl;
  }
}