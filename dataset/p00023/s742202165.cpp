#include <iostream>
#include <cmath>
using namespace std;


int main() {
  int n;
  double xa, ya, ra, xb, yb, rb;
  double d;
  cin >> n;
  while(n--) {
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    d = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    if (d > ra+rb) {
      cout << "0" << endl;
    } else if (d >= abs(ra-rb)) {
      cout << "1" << endl;
    } else if (ra > rb) {
      cout << "2" << endl;
    } else {
      cout << "-2" << endl;
    }
  }

  return 0;
}