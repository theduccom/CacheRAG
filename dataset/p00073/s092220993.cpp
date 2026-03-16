#include<bits/stdc++.h>
using namespace std;
int main(){
  double x,h,area=0;
  while(1){
    cin >> x >> h;
    if( x == 0 && h == 0) break;
    area+=(x*x);
    double y=sqrt((x/2)*(x/2)+h*h);
    area+=x*y*2;
    printf("%lf\n",area);
    area=0;
  }
  return 0;
}