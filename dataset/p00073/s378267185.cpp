#include<cstdio>
#include<cmath>
using namespace std;

int main(){
  int x,h;
  while(scanf("%d%d",&x,&h),x||h){
    double a = (double)x/2;
    a = sqrt(h*h+a*a);
    printf("%.9lf\n",2*a*x+x*x);
  }
}