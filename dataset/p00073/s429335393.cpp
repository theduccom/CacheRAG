#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
  int x,h;
  while(cin>>x>>h,x||h){
    printf("%f\n",x*x+2*x*(double)sqrt((double)x*x/4+h*h));
  }


}