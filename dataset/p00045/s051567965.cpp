#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int a, b, s = 0, c = 0;
  double i = 0;
  while (scanf("%d,%d", &a, &b) != EOF) {
    s += a * b;
    c += b;
    i++;
  }
  cout << s << endl << round(c / i) << endl;
  return 0;
}