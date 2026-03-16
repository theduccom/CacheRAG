#include <iostream>
#include <cmath>

using namespace std;

double degToRad(int deg) {
  return deg * M_PI / 180;
}

int main(void) {
  double x = 0.0, y = 0.0;
  int deg = 90;

  while(1) {
    int l, d;
    scanf("%d,%d", &l, &d);
    if(l == 0 && d == 0) break;

    x += l*cos(degToRad(deg));
    y += l*sin(degToRad(deg));

    deg -= d;
  }

  cout << (int)x << endl;
  cout << (int)y << endl;

  return 0;
}