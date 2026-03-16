#include <stdio.h>
#include <math.h>

int dtoi(double d)
{
  return d>0 ? floor(d) : ceil(d);
}

int main(void)
{
  double x = 0;
  double y = 0;
  int orientation = 90;
  while(1){
    int step,rotation;
    scanf("%d,%d", &step, &rotation);

    if(step==0 && rotation==0){
      printf("%d\n", dtoi(x));
      printf("%d\n", dtoi(y));
      break;
    }else{
      x += step*cos(orientation*M_PI/180);
      y += step*sin(orientation*M_PI/180);
      orientation -= rotation;
    }
  }

  return 0;
}