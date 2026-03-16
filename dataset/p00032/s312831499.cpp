#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  int d = 0, e = 0;
  while (scanf("%d,%d,%d", &a, &b, &c) != EOF) {
    if ((a + b) <= c || (b + c) <= a || (a + c) <= b || a > c || b > c)
      continue;
    if ((a * a + b * b) == c * c)
      d++;
    else
      e++;
  }
  cout << d << endl << e << endl;
  return 0;
}