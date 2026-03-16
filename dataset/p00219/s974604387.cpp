#include <bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,b,s;
  while(cin>>s,s){
    int a[10]={0};
    while(s--){
      cin>>b;
      a[b]++;
    }
  r(i,10){
    if(a[i])r(j,a[i])cout<<'*';
    else cout<<'-';
    cout<<endl;
  }
}
}