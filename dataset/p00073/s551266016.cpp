#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
  double x,h,answer;
  while (1) {
    scanf("%lf%lf", &x, &h);
    if ( x == 0 && h == 0 ) { break; }
    answer = pow(x,2) + (sqrt(pow(h,2) + pow((x/2), 2)) * x / 2 * 4);
    printf("%.6f\n", answer);
  }
  return 0;
}