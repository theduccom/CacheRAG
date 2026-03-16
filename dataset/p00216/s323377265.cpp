#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  int w;
  for(;;) {
    cin >> w;
    if(w == -1) break;
    if(w <= 10) cout << 4280 - 1150 << endl;
    if(10 < w && w <= 20) {
      int payment = 1150 + (w - 10) * 125;
      cout << 4280 - payment << endl;
    }
    if(20 < w && w <= 30) {
      int payment = 1150 + 10 * 125 + (w - 20) * 140;
      cout << 4280 - payment << endl;
    }
    if(30 < w) {
      int payment = 1150 + 10 * 125 + 10 * 140 + (w - 30) * 160;
      cout << 4280 - payment << endl;
    }
  }
}


