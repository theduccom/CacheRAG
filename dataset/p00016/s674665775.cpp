#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
  double x,y = 0;
  int walk;
  int rad;
  int sumrad = 90;
  while( scanf("%d,%d", &walk, &rad), walk){
    x += walk*cos((double)sumrad*3.141592/180);
    y += walk*sin((double)sumrad*3.141592/180);
    sumrad -= rad;
  }
  cout << (int)x << endl
       << (int)y << endl;

  return 0;
}