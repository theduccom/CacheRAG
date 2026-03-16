#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  char ch1,ch2;
  int ans1=0,ans2=0;
  while(cin>>a>>ch1>>b>>ch2>>c){
    if(a*a+b*b==c*c)ans1++;
    if(a==b) ans2++;
  }
  cout<<ans1<<endl<<ans2<<endl;
  return 0;
}