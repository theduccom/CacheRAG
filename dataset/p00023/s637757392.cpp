#include <cmath>
#include <iostream>

using namespace std;

inline double sq(double x) {
  return x * x;
}

int main() {
  int N;
  cin >> N;
  for (int i = 0; i < N; i++) {
    double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    double d = sqrt(sq(xb-xa)+sq(yb-ya));
    if (d > ra + rb)
      cout << 0 << endl;
    else if (ra > d + rb)
      cout << 2 << endl;
    else if (rb > d + ra)
      cout << -2 << endl;
    else
      cout << 1 << endl;
  }
  return 0;
}