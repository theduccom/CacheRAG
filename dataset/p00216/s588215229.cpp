#include<iostream>
using namespace std;
#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n)   REP(i,0,n)
main(){
  int n;
  while(cin>>n && n>=0){
    int ans =1150;
    int tmp=n;
    int val=n-10;
    if (n >=10){
      if (n>=20)ans+=10*125;
      else ans+=(n-10)*125;
    }
    if (n >=20){
      if (n>=30)ans+=10*140;
      else ans+=(n-20)*140;
    }
    if (n >= 30)ans+=(n-30)*160;
    cout << 4280-ans << endl;
  }
}