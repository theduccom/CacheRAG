#include <iostream>
#include <cmath>
using namespace std;

struct Circle{
  double x, y, r;
};

int main() {
  int N;
  cin >> N;
  for(int i = 0; i < N; i++) {
    Circle a, b;
    cin >> a.x >> a.y >> a.r >> b.x >> b.y >> b.r;
    double d = pow(a.x-b.x, 2.0) + pow(a.y-b.y, 2.0);
    if(d < pow(a.r-b.r, 2.0)) {
      if(a.r > b.r)      cout << 2 << endl;
      else if(a.r < b.r) cout << -2 << endl;
    } else if(d > pow(a.r + b.r, 2.0)) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }
  return 0;
}