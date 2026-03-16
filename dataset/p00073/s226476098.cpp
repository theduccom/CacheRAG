#include<bits/stdc++.h>
using namespace std;
int main(){
  double x,h;
  while(1){
    scanf("%lf %lf",&x,&h);
    if(x==0 && h==0) break;
    double soku = sqrt(((double)x*0.5) * ((double)x*0.5)+ (double)h*(double)h);
    printf("%f\n",(double)x*(double)x + (double)4 * (soku * (double)x * 0.5));
  }
}