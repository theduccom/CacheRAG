#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#define PI 3.141592653589793

using namespace std;

int main() {
  string str;
  int to;
  double x,y,direction,r,theta;
  x = 0;
  y = 0;
  r = 0;
  theta = 0;
  direction = 90;
  while(cin >> str) {
    to = str.find(",",0);
    r = (double)strtol(str.substr(0,to).c_str(),NULL,10);
    theta = strtol(str.substr(to+1).c_str(),NULL,10);
    if( r == 0 && theta == 0) break;
    //cout << direction << endl;
    x += r * cos(direction * (PI / 180.0));
    y += r * sin(direction * (PI / 180.0));
    direction -= (double)theta;
    str = "0";
  }
  cout << (int)x << endl << (int)y << endl;
}