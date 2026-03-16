#include <iostream>
using namespace std;

int main() {
  double v;
  while(cin >> v) {
    double N = (v*v)/98+1;
    if(N != (int)N) N++;
    cout << (int)N << endl;
  }
  return 0;
}