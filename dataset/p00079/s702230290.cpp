#include <cstdio>
#include <map>
#include <cmath>
using namespace std;

int main(){
  pair<double,double> p[20];
  int i=1;
  double a,b,c,z,S;
  S=0.0;
  scanf("%lf,%lf",&p[0].first,&p[0].second);
  scanf("%lf,%lf",&p[1].first,&p[1].second);
  while(scanf("%lf,%lf",&p[i+1].first,&p[i+1].second)>0){
    a=sqrt((p[i+1].first-p[0].first)*(p[i+1].first-p[0].first)+(p[i+1].second-p[0].second)*(p[i+1].second-p[0].second));
    b=sqrt((p[i].first-p[0].first)*(p[i].first-p[0].first)+(p[i].second-p[0].second)*(p[i].second-p[0].second));
    c=sqrt((p[i].first-p[i+1].first)*(p[i].first-p[i+1].first)+(p[i].second-p[i+1].second)*(p[i].second-p[i+1].second));
    z=(a+b+c)/2;
    S+=sqrt(z*(z-a)*(z-b)*(z-c));
    i++;
  }
  printf("%.6lf\n",S);
return 0;
}