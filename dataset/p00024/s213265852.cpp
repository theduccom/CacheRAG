#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  double v0;
  while (scanf("%lf ", &v0) == 1) {
    cout << (int)((v0 * v0)/ (5.0 * 4.0 * 4.9)) + 2 << endl;
  }
}