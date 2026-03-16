//32
#include<cstdio>
#include<cmath>
#include<complex>

using namespace std;

int main(){
  double x,y,px,py;
  scanf("%lf,%lf%lf,%lf",&x,&y,&px,&py);
  double s=0;
  complex<double> p(x,y),pp(px,py);
  for(double cx,cy;scanf("%lf,%lf",&cx,&cy)!=EOF;){
    complex<double> cp(cx,cy);
    double a=abs(pp-p),b=abs(cp-p),c=abs(cp-pp);
    double z=(a+b+c)/2;
    s+=sqrt(z*(z-a)*(z-b)*(z-c));
    pp=cp;
  }
  printf("%.6f\n",s);
  return 0;
}