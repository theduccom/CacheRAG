#include <bits/stdc++.h>
#define P int
using namespace std;
string s;
int p;
P bns1();
P g_A(){
  P r=0;
  if(s[p]=='('){
    p++;
    r=bns1();
    p++;
  }
  else{
    while(isdigit(s[p])){
      r=r*10+(s[p]-'0');
      p++;
    }
  }
  return r;
}
P bns2(){
  P res=g_A();
  while(s[p]=='*'||s[p]=='/'){
    int t=p++;
    if(s[t]=='*')res*=g_A();
    if(s[t]=='/')res/=g_A();
  }
  return res;
}
P bns1(){
  P res=bns2();
  while(s[p]=='+'||s[p]=='-'){
    int t=p++;
    if(s[t]=='+')res+=bns2();
    if(s[t]=='-')res-=bns2();
  }
  return res;
}
int main(){
  int ans,n;
  cin>>n;
  while(n--){
    cin>>s;
    p=0;
    P ans=bns1();
    cout<<ans<<endl;
  }
}