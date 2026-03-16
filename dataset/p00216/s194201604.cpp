#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<string>
#include<cmath>
#include<cstring>
using namespace std;

int main(){
  int w,sum=0;
  while(1){
    scanf("%d",&w);
    if(w==-1) break;
    if(w>30){
      sum+=(w-30)*160;
      w=30;
    }
    if(w>20){
      sum+=(w-20)*140;
      w=20;
    }
    if(w>10){
      sum+=(w-10)*125;
    }
    printf("%d\n",4280-(sum+1150));
    sum=0;
  }   
  return 0;
}

