#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <numeric>
#include <cstring>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
  int n, pm, pe, pj;
  while (cin >> n, n) {
    for (int i = 0; i < n; i++) {
      cin >> pm >> pe >> pj;
      if (pm == 100 || pe == 100 || pj == 100)
        cout << 'A' << endl;
      else if ((pm + pe) / 2 >= 90)
        cout << 'A' << endl;
      else if ((pm + pe + pj) / 3 >= 80)
        cout << 'A' << endl;
      else if ((pm + pe + pj) / 3 >= 70)
        cout << 'B' << endl;
      else if (((pm + pe + pj) / 3 >= 50) &&
               (pm >= 80 || pe >= 80))
        cout << 'B' << endl;
      else
        cout << 'C' << endl;
    }
  }
  return 0;
}