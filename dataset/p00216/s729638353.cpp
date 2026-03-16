#include<vector>
#include<list>
#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
  int w,g;
  while(cin>>w&&w!=-1){
    g=3130;
    if(w-w%10==0);
    else if(w-w%10==10)
      g-=w%10*125;
    else if(w-w%10==20){
      g-=1250;
      g-=w%10*140;
    }else{
      g-=2650;
      g-=(w-30)*160;
    }
    cout<<g<<endl;
  }
  return 0;
}