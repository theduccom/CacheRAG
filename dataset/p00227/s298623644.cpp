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
  int price[1000];
  int n, m, pack, hoge, howmach;

  while (cin >> n >> m, n) {
    for (int i = 0; i < n; i++)
      cin >> price[i];

    sort(price, price + n);
    pack = n / m;
    hoge = n % m;
    howmach = accumulate(price, price + n, 0);
    for (int i = 0; i < pack; i++) {
      howmach -= price[m * i + hoge];
    }
    cout << howmach << endl;
  }
  return 0;
}