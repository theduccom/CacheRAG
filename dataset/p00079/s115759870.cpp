#include <cstdio>
#include <complex>
#include <cmath>
using namespace std;
typedef complex<double> xy_t;
xy_t P[21];
double area(xy_t A, xy_t B,xy_t C)
{
  double a=abs(B-C);
  double b=abs(A-C);
  double c=abs(A-B);
  double z=(a+b+c)/2.0;
  return sqrt(z*(z-a)*(z-b)*(z-c));
}
int main()
{
  int N=0;
  double x,y;
  while(scanf("%lf,%lf",&x,&y)!=EOF)
  {
    P[N++]=xy_t(x,y);
  }
  double sum=0.0;
  for(int i=1;i<N-1;i++)
  {
    sum+=area(P[0],P[i],P[i+1]);
  }
  printf("%6lf\n",sum);
  return 0;
}