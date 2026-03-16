#include<iostream>
#include<cstdio>
#include<cctype>
#include<string>
using namespace std;
int main(){
  char a;
  string strin;
  while(scanf("%c",&a)!=EOF){
  if(a>='a' && a<='z')a-='a'-'A';
  strin+=a;
  }
  cout<<strin;
}