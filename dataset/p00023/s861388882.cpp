#include <complex>
#include <iostream>
using namespace std;

typedef complex<double> P;

int main() {
  int n;
  cin >> n;
  while(n--) {
    double ra,rb;
    double x1,y1,x2,y2;
    cin >> x1>>y1>>ra>>x2>>y2>>rb;
    P a(x1,y1), b(x2,y2);
    double d = abs(a-b);
    if (d<ra-rb) cout << 2;
    else if (d<rb-ra) cout << -2;
    else if (d<=ra+rb) cout << 1;
    else cout << 0;
    cout << endl;
  }
}