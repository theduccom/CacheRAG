#include <iostream>
#include <algorithm>
using namespace std;

main() {
  double a, mina, maxa;
  mina = 99999999;
  maxa = -99999999;
  while(cin >> a) {
    mina = min(mina, a);
    maxa = max(maxa, a);
  }
  cout << maxa - mina << endl;
}