#include "bits/stdc++.h"
using namespace std;

int main(){
  int n;
  while(cin>>n){
    vector<int> a(10);
    a[0]=512;
    a[1]=256;
    a[2]=128;
    a[3]=64;
    a[4]=32;
    a[5]=16;
    a[6]=8;
    a[7]=4;
    a[8]=2;
    a[9]=1;
    vector<int> ans;
    for(int i=0;i<10;i++){
      if(n>=a[i]){
        n-=a[i];
        ans.push_back(a[i]);
      }
    }
    for(int i=ans.size()-1;i>=0;i--){
      if(i!=ans.size()-1)cout<<" ";
      cout<<ans[i];
    }
    cout<<endl;
  }
}

