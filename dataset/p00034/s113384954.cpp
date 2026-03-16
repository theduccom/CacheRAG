#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  // ifstream cin("../test.txt");
  int l[10];
  int v1, v2;
  while (cin >> l[0]) {
    int L = l[0];
    char c;
    for (int i = 1; i < 10; i++) {
      cin >> c >> l[i];
      L += l[i];
    }
    cin >> c >> v1;
    cin >> c >> v2;

    float t = (float)L / (v1 + v2);
    float d = t * v1;
    for (int i = 0; i < 10; i++) {
      d -= l[i];
      if (d <= 0) {
        cout << i+1 << endl;
        break;
      }
    }
  }
}