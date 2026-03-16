#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> primenum;
  primenum.push_back(2);
  for(int i=3;i<=60000;i+=2){
    int k=0;
    for(int j=3;j<=sqrt(i);j+=2){
      if(i%j==0){
	k=1;
	break;
      }
    }
    if(k==0)
      primenum.push_back(i);
  }
  int num;
  while(cin>>num){
    for(int i=0;i<primenum.size();i++){
      if(primenum[i]==num){
	cout<<primenum[i-1]<<" "<<primenum[i+1]<<endl;
	break;
      }else if(primenum[i]>num){
	cout<<primenum[i-1]<<" ";
	cout<<primenum[i]<<endl;
	break;
      }
    }
  }
  return 0;
}