#include <bits/stdc++.h>
using namespace std;
string s;
int p,n;
int bnf1();
int g_A(){
  int r=0;
  if(s[p]=='(')p++,r=bnf1(),p++;
  else
    while(isdigit(s[p])) r=r*10+(s[p++]-'0');
  return r;
}
int bnf2(){
  int res=g_A();
  while(s[p]=='*'||s[p]=='/'){
    int t=p++;
    if(s[t]=='*')res*=g_A();
    if(s[t]=='/')res/=g_A();
  }
  return res;
}
int bnf1(){
  int res=bnf2();
  while(s[p]=='+'||s[p]=='-'){
    int t=p++;
    if(s[t]=='+')res+=bnf2();
    if(s[t]=='-')res-=bnf2();
  }
  return res;
}
int main(){
  cin>>n;
  while(n--){
    cin>>s;
    p=0;
    cout<<bnf1()<<endl;
  }
}