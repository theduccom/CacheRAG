#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main(){

  int r, deg, theta;
  double x, y, rad;

  x = 0.0;
  y = 0.0;
  theta = 0;
  rad = M_PI / 180;
  do{
    scanf("%d, %d", &r, &deg);
    if(r == 0 && deg == 0) break;
  	x += r * cos(theta * rad);
  	y += r * sin(theta * rad);
    theta = theta + deg;
  }while(1);

  cout << (int)y << endl << (int)x << endl;

  return 0;
}