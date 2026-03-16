#include <cmath>
#include <cstdio>
using namespace std;
 
int main(void){
  double a,b,c,min,tmp;
  int r,n;
 
  while(1){
    scanf("%lf%lf%lf",&a,&b,&c);
    if(!a && !b && !c) break;
 
    scanf("%d",&n);
    while(n--){
      scanf("%d",&r);
      min = 999999;
      if((tmp=sqrt(a*a+b*b)/2)<min) min=tmp;
      if((tmp=sqrt(a*a+c*c)/2)<min) min=tmp;
      if((tmp=sqrt(b*b+c*c)/2)<min) min=tmp;
 
      if(min<r) printf("OK\n");
      else printf("NA\n");
    }
  }
 
  return 0;
}