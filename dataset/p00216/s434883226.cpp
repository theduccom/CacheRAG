#include<cstdio>
#include<iostream>
using namespace std;

int main(){

  while(1){
    int a;
    scanf("%d",&a);
    if(a==-1) break;
    
    int cost=1150;
    if(a>10) cost+=((a-10>=10)?(10):(a-10))*125;
    if(a>20) cost+=((a-20>=10)?(10):(a-20))*140;
    if(a>30) cost+=(a-30)*160;

    printf("%d\n",4280-cost);
  }

  return 0;
}