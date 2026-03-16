#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int main(){
  char a;
  while(scanf("%c",&a)!=EOF){
  if(a>='a' && a<='z')a-='a'-'A';
  printf("%c",a);
  }
}