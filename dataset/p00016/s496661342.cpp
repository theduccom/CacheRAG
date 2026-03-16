#include <iostream>
#include <math.h>

#define PI 3.14159265358979

using namespace std;

int main(){
  int theta,x,theta_sum;
  double x_sum,y_sum;
  x_sum =0;
  scanf("%d,%d",&x,&theta);
  y_sum = (double)x,theta_sum =(double)theta;
  while(1){
    scanf("%d,%d",&x,&theta);
    if(x == 0 && theta == 0) break;
    x_sum += (double)x * sin(double(theta_sum * PI / 180.00));
    y_sum += (double)x * cos(double(theta_sum * PI / 180.00));
    theta_sum += theta;
  }

  cout << (int)x_sum << endl << (int)y_sum << endl;

  return 0;

}