#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
  vector<int>pri;
  pri.push_back(2);
  for(int i=3;;i+=2){
    int flag=1;
    for(int j=2;j<=sqrt(i);j++){
      if(i%j==0){
	flag=0;
	break;
      }
    }
    if(flag)
      pri.push_back(i);
    if(pri.size()==10000)
      break;
  }
  int n;
  while(cin>>n,n){
    long long ans=0;
    for(int i=0;i<n;i++){
      ans+=pri[i];
      //cout<<pri[i]<<endl;
    }
    cout<<ans<<endl;
  }
  return 0;
}