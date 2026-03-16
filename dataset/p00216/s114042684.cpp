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
  int w, fee;
  int ryoukin[] = {0, 125, 140, 160};
  const int Kihon = 1150;
  const int Bef = 4280;

  while (true) {
    cin >> w;
    if (w == -1)
      break;
    fee = Kihon;
    for (int i = 3; i > 0; i--) {
      fee += (w > i * 10 ? w - i * 10 : 0) * ryoukin[i];

      w -= w > i * 10 ? w - i * 10 : 0;
    }
    cout << Bef - fee << endl;
  }
  return 0;
}