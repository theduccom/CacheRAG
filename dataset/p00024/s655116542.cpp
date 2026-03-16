#include <iostream>
using namespace std;

int main() {

  double v;
  while(cin >> v) {
  double t = v/9.8;
  double y = 4.9*t*t;
  int n = 0;
  while(1) {
    if(y < 5*n-5) break;
    n++;
  }
  cout << n  <<endl;
  }

  return 0;
}