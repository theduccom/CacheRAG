#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
  short ans[50001]={};
  vector<int>pri;
  pri.push_back(2);
  for(int i=3;i<=50000;i+=2){
    int flag=1;
    for(int j=2;j<=sqrt(i);j++){
      if(i%j==0){
	flag=0;
	break;
      }
    }
    if(flag)
      pri.push_back(i);
  }
  for(int i=0;i<pri.size();i++){
    for(int j=i;j<pri.size();j++){
      if(pri[i]+pri[j]>50000)
	break;
      ans[pri[i]+pri[j]]++;
    }
  }
  int n;
  while(cin>>n,n)
    cout<<ans[n]<<endl;
  return 0;
}