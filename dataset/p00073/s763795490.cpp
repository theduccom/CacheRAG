#include<bits/stdc++.h>
using namespace std;

int main(){
  double x,h;
  while(1){
    cin>>x>>h;
    if(!x&&!h)break;
    printf("%.6f\n",x*x+x*sqrt(h*h+x*x/4)*2);
  }
  return 0;
}