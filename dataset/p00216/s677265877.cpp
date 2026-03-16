#include<iostream>
using namespace std;
int n,ans;
int main(){
  while(1){
    cin>>n;
    if(n==-1)break;
    ans=1150;
    if(n>=10)ans+=min(10,n-10)*125;
    if(n>=20)ans+=min(10,n-20)*140;
    if(n>=30)ans+=(n-30)*160;
    cout<<4280-ans<<endl;
  }
  return 0;
}