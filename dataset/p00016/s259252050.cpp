#include <bits/stdc++.h>
#define P 3.14159265
using namespace std;
int main(){
  int a,b;
  double x=0,y=0,s=90;
  while(scanf("%d,%d",&a,&b),a){
    x+=a*cos(s*M_PI/180);
    y+=a*sin(s*M_PI/180);
    s-=b;
  }cout<<(int)x<<endl<<(int)y<<endl;
}