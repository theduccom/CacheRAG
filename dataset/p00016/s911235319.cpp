#include <cstdio>
#include <cmath>

#define PI 3.14159265358979323

int main(void)
{
  double deg = 30;
  double ang = 90;
  double len = 2;
  double ansx = 0, ansy = 0;
  while (1) {
    scanf("%lf,%lf", &len, &deg);
	if (len == 0 && deg == 0)
		break;
    double rad = ang * PI / 180.0;
    double x = len * cos( rad );
    double y = len * sin( rad );
	ang = ang - deg;
//    printf( "X=%f Y=%f\n", x, y );
	ansx = ansx + x;
	ansy = ansy + y;
  }
  printf( "%.0f\n%.0f\n", floor(ansx), ceil(ansy) );

  return 0;
}