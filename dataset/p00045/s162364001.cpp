#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  int a,b;
  int sump=0;
  int num=0;
  int i=0;
  while(scanf("%d,%d",&a,&b)+1){
    //if(a==0)break;
    i++;
    sump+=a*b;
    num+=b;
  }
  int ave=(int)((double)num/(double)i+0.5);
  cout<<sump<<endl<<ave<<endl;
}