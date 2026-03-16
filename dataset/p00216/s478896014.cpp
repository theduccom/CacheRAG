#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;



int main() {
  int n;
  while (cin >> n, n != -1) {
    int cost = 1150;
    if (n > 10) cost += min(10, n - 10) * 125;
    if (n > 20) cost += min(10, n - 20) * 140;
    if (n > 30) cost += (n - 30) * 160;
    cout << 4280 - cost << endl;
  }
}