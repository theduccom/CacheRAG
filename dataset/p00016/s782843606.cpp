#include <cmath>
#include <iostream>
#include <utility>

using namespace std;

int main() {
  const double pi = acos(-1);
  double x = 0, y = 0, angle = 90;
  int dis, dir;
  char c;
  while (true) {
    cin >> dis >> c >> dir;
    if (dis == 0 && dir == 0) break;
    x += dis * cos(angle * pi / 180.0);
    y += dis * sin(angle * pi / 180.0);
    angle -= dir;
  }
  cout << (int)x << '\n' << (int)y << endl;
}