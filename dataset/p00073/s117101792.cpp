#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
  int m,h;
  double s,l,S;
  while(1){
    cin >> m >> h;
    if(m==0 && h==0){
      break;
    }
    s=m;
    l=h;
    S=s*sqrt(4*h*h+m*m)+m*m;
    printf("%.6f\n",S);
  }
  return 0;
}