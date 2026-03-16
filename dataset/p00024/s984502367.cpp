#include <iostream>
#include <cmath>

using namespace std;

const static double g = 9.8;
int main() {
  // Energy conservation law
  // mgh = (1/2)mv^2
  double v;
  while(cin >> v) {
    double h = (1./2.) * v * v / g;
    int N = 1;
    while(true) {
      if((double)(N*5 - 5) > h) {
        break;
      }
      N++;
    }
    cout << N << endl;
  }
}