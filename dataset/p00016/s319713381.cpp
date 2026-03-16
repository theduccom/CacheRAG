#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846264338327950288
#endif

int main(int argc, char** argv)
{
  double dx = 0.0, dy = 1.0;

  double x = 0, y = 0;

  int d, t;

  for (int i = 0; fscanf(stdin, "%d,%d", &d, &t) == 2; i = (i + 1) % 4) {
    if (d == 0 && t == 0)
      break;

    x += d * dx;
    y += d * dy;
    
    double r = t / 180.0 * M_PI;

    double ndx =  cos(r) * dx + sin(r) * dy;
    double ndy = -sin(r) * dx + cos(r) * dy;

    dx = ndx;
    dy = ndy;
  }
  fprintf(stdout, "%d\n%d\n", int(x), int(y));
}