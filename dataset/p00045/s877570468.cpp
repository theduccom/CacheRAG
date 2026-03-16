#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int sell=0,num=0;
  int a,b,count=0;
  while(scanf("%d,%d",&a,&b)!=EOF){
    count++;
    sell+=a*b;
    num+=b;
  }
  cout<<sell<<endl;
  cout<<(num+(count/2))/count<<endl;
}