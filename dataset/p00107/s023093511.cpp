#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
  int size[3];
  while (true) {
    cin >> size[0] >> size[1] >> size[2];
    if (size[0] == 0 && size[1] == 0 && size[2] == 0)
      break;
    sort(size+0, size+3);
    double a = size[0], b = size[1];
    double hoge = sqrt(a * a + b * b);
    int n, r;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> r;
      if (r * 2 > hoge)
        cout << "OK" << endl;
      else
        cout << "NA" << endl;
    }
  }
  return 0;
}