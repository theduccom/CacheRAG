#include <cmath>
#include <cstdio>

#define calc(x) (x*M_PI/180.0)

using namespace std;

int main()
{
  int a, b;
  double x=0, y=0, r=0;

  while(scanf("%d,%d",&a,&b) != EOF && !(a == 0 && b == 0)){
    x += (double)a*sin(calc(r));
    y += (double)a*cos(calc(r));
    r += (double)b;
  }
  printf("%d\n%d\n", (int)x, (int)y);

  return 0;
}