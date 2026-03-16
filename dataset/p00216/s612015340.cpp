#include<bits/stdc++.h>
using namespace std;
int main(){
  int a;
  while(1){
    int ans=1150;
    cin>>a;
    if(a==-1) break;
    if(a>10&&a<=20) ans+=(a-10)*125;
    if(a>20&&a<=30) ans+=1250+(a-20)*140;
    if(a>30) ans+=1250+1400+(a-30)*160;
    cout<<4280-ans<<endl;
  }
  return(0);
}

