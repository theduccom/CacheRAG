#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#define p(n) pow(n,2)
using namespace std;
int main(){
  int a,b,c,rhom=0,rect=0;
  while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
    if(p(a)+p(b)==p(c))rect++;
       if(a==b)rhom++;
  }
cout<<rect<<endl<<rhom<<endl;
  return 0;
}