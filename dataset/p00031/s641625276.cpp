#include <bits/stdc++.h>
using namespace std;

int main() {
  int g;
  vector<int> v;
  while (cin >> g) {
    while (g) {
      int i = 1;
      while (g >= i * 2) {
        i *= 2;
      }
      v.push_back(i);
      g -= i;
    }
    
    for (int i = v.size() - 1; i >= 0; i--) {
      if (!i) {
        cout << v.at(i) << endl;
      } else {
        cout << v.at(i) << " ";
      }
    }
    v.clear();
  }
}

