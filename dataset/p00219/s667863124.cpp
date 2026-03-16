#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  vector<int> shu(10,0);
  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>m;
      shu[m]++;
    }
    for(int i=0;i<=9;i++){
      if(shu[i]==0)cout<<"-"<<endl;
      else{
	for(int j=0;j<shu[i];j++)cout<<"*";
	cout<<endl;
      }
    }
    for(int i=0;i<=9;i++)shu[i]=0;
  }
  return 0;
}