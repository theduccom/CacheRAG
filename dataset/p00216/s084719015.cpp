#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,s,i;
  while(cin>>n,n>-1){
    for(s=0,i=11;i<=n;i++){
      if(i<21)s+=125;
      else if(i>20&&i<31)s+=140;
      else s+=160;
    }
    cout<<3130-s<<endl;
  }
}