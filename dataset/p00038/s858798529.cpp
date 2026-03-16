#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int a[5];

bool four_card() {
  if (a[0] == a[1]) {
    return a[1] == a[2] && a[2] == a[3];
  } else {
    return a[1] == a[2] && a[2] == a[3] && a[3] == a[4];
  }
}

bool straight() {
  if (a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13)
    return true;
  for (int i = 0; i < 4; i++)
    if (a[i] != a[i+1] - 1)
      return false;
  return true;
}

bool full_house() {
  int b = a[0];
  int c = a[4];
  if (b != a[1] || c != a[3])
    return false;
  return b == a[2] || c == a[2];
}

bool three_card() {
  if (a[0] == a[1]) {
    return a[1] == a[2];
  } else if (a[1] == a[2]) {
    return a[2] == a[3];
  } else {
    return a[2] == a[3] && a[3] == a[4];
  }
}

bool two_pair() {
  set<int> se;
  for (int i = 0; i < 5; i++)
    se.insert(a[i]);
  return se.size() == 3;
}

bool one_pair() {
  set<int> se;
  for (int i = 0; i < 5; i++)
    se.insert(a[i]);
  return se.size() == 4;
}

int main() {
  string s[7] = {
    "four card", "full house", "straight", "three card", "two pair", "one pair", "null"
  };

  char c;
  while (cin >> a[0]) {
    for (int i = 1; i < 5; i++)
      cin >> c >> a[i];
    sort(a, a + 5);
    string res;
    if (four_card()) {
      res = s[0];
    } else if (full_house()) {
      res = s[1];
    } else if (straight()) {
      res = s[2];
    } else if (three_card()) {
      res = s[3];
    } else if (two_pair()) {
      res = s[4];
    } else if (one_pair()) {
      res = s[5];
    } else {
      res = s[6];
    }
    cout << res << endl;
  }
}