#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a,b,c;
  int cnta=0,cntb=0;
  while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
    if(a*a+b*b==c*c)cnta++;
    else if(a==b)cntb++;
  }
  cout<<cnta<<endl<<cntb<<endl;
}