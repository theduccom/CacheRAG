#include <iostream>
#include <cmath>

using namespace std;

int main () {
  int n;
  double xa, ya, ra, xb, yb, rb;
  double d;

  cin >> n;

  while(n--){
    cin >> xa >> ya >> ra >> xb >> yb >> rb;
    d = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));

    int out;

    if(ra + rb < d) out = 0;
    else if(ra + d < rb)  out = -2;
    else if(rb + d < ra)  out = 2;
    else  out = 1;

    cout << out << endl;
  }
}