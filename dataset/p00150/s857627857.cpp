#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
  vector<int>prime;
  prime.push_back(2);
  for(int i=3;i<10000;i+=2){
    int flag=1;
    for(int j=2;j<=sqrt(i);j++){
      if(i%j==0){
	flag=0;
	break;
      }
    }
    if(flag)
      prime.push_back(i);
  }
  int n;
  while(cin>>n,n){
    for(int i=prime.size();i>0;i--){
      if(prime[i]<=n&&(prime[i]-prime[i-1])==2){
	cout<<prime[i-1]<<" "<<prime[i]<<endl;
	break;
      }
    }
  }
  return 0;
}