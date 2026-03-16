#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  double v;
  while (cin >> v) {
    double t = v / 9.8;
    double y = 4.9 * t * t;
    // y <= 5n-5 <=> n >= (y+5)/5
    int n = ceil((y + 5) / 5);
    cout << n << endl;
  }
}