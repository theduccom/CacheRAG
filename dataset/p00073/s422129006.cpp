//Surface Area of Quadrangular Pyramid
#include<bits/stdc++.h>
using namespace std;

int main(){
  int x, h;
  while(cin>>x>>h){
    if(x==0&&h==0)break;
    printf("%.8f\n", sqrt(h*h+x*x/4.0)*x*2+x*x);
  }
  return 0;
}