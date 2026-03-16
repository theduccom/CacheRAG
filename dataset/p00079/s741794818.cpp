#include <cstdio>
#include <cmath>
using namespace std;

inline double alength(double x1,double y1,double x2,double y2){
  return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main(void){
  double x[20],y[20];
  int i=0;
  double S=0.0;
  while(scanf("%lf,%lf",&x[i],&y[i])!=EOF)++i;
  for(int p=1;p<i-1;++p){
      double a=alength(x[0],y[0],x[p],y[p]);
      double b=alength(x[p],y[p],x[p+1],y[p+1]);
      double c=alength(x[p+1],y[p+1],x[0],y[0]);
      double s=(a+b+c)/2.0;
      double dS=sqrt(s*(s-a)*(s-b)*(s-c));
      S+=dS;
    }
  printf("%.6f\n",S);
  return 0;
}