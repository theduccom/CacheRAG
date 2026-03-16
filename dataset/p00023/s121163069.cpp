#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void) {
  int n;
  double xa, ya, ra, xb, yb, rb, d;
  cin >> n;

  while (n--) {
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    d = sqrt((xb-xa)*(xb-xa)+(yb-ya)*(yb-ya));
    if (d > (ra + rb)) cout << "0";
    else if (d < (rb - ra)) cout << "-2";
    else if (d < (ra - rb)) cout << "2";
    else cout << "1";
    cout << endl;
  }

  return 0;
}