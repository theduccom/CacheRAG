#include <iostream>
#include <cmath>
#define PI 3.14159265
using namespace std;
int main() {
  int len, rot;
  float x, y, shita;
  x = y = shita = 0;
  while(1) {
    scanf("%d,%d", &len, &rot);
    if (len == 0 && rot == 0) {
      break;
    }
    x += len * cos(shita * PI / 180);
    y += len * sin(shita * PI / 180);
    shita += rot;
  }
  cout << (int)y <<  endl;
  cout << (int)x << endl;
  return 0;
}