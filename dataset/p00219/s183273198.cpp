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
  int ice[10], n;
  while (cin >> n, n) {
    memset(ice, 0, sizeof(int) * 10);
    for (int i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      ice[tmp]++;
    }
    for (int i = 0; i < 10; i++) {
      if (ice[i] > 0) {
        for (int j = 0; j < ice[i]; j++)
          cout << '*';
        cout << endl;
      } else {
        cout << '-' << endl;
      }
    }
  }
  return 0;
}