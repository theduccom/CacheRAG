#include <iostream>
#include <math.h>
using namespace std;

int main(){
  int l,theta_in,theta = 90;
  double x = 0, y = 0;
  char k;
  double pi = atan(1)*4;
  while(cin >> l >> k >> theta_in,l||theta_in){
	x += l*cos(theta*pi/180); 
	y += l*sin(theta*pi/180);
	theta -= theta_in;
  }
  cout << (int) x << endl
	   << (int) y << endl;
  return 0;
}