#include<iostream>
#include<cmath>

using namespace std;

int main(){
  int distance, angle, _angle=0;
  double x=0, y=0, radian;
  char c;

  while(1){
    cin >> distance >> c >> angle;
    if(distance == 0 && angle == 0) break;

    radian = _angle * M_PI / 180;
    _angle += angle;

    x += distance * sin(radian);
    y += distance * cos(radian);
  }

  cout << (int)x << endl;
  cout << (int)y << endl;
  return 0;
}