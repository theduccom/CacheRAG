#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  for (;;) {
    int n;
    cin >> n;
    if (!n) return 0;
    int is[10];
    fill(is, is+10, 0);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      is[x]++;
    }
    for (int i = 0; i <= 9; i++) {
      if (is[i])
        for (int j = 0; j < is[i]; j++)
          cout << '*';
      else
        cout << '-';
      cout << endl;
    }
  }
}