#include<iostream>
using namespace std;
#include<iomanip>

int main(){
  double n;
  double ans;
  while(cin>>n){
    ans=n;
    for(int i=2;i<11;i++){
      if(i%2==0){
        n*=2;
        ans+=n;
      }else{
        n/=3;
        ans+=n;
      }
    }
    cout<<fixed<<setprecision(8)<<ans<<endl;
  }
  return 0;
}