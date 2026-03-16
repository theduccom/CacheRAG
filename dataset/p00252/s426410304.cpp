#include<bits/stdc++.h>
using namespace std;
signed main(){
  cin.tie(NULL);
  ios::sync_with_stdio(false);
  int a,b,c;
  cin>>a>>b>>c;
  if(a==1){
    if(b==0) cout<<"Close"<<'\n';
    else cout<<"Open"<<'\n';
  }
  else{
    if(b==0){
      if(c==0) cout<<"Close"<<'\n';
      else cout<<"Open"<<'\n';
    }
    else cout<<"Close"<<'\n';
  }
  return(0);
}

