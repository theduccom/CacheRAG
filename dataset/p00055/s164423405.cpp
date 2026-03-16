#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char **argv)
{
  double d;
  cout.precision(8);
  cout << fixed;
  while (cin>>d) {
    double acm = d;
    for (int i = 2; i <= 10; i++) {
      if (i%2) {
        d /= 3;
        acm += d;
      } else {
        d *= 2;
        acm += d;
      }
    }
    cout << acm << endl;
  }
  return 0;
}