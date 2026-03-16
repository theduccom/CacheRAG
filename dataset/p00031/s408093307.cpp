#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <stack>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
  // ifstream cin("../test.txt");
  int n;
  int a[10] = {1,2,4,8,16,32,64,128,256,512};
  while (cin >> n) {
    stack<int> s;
    for (int i = 9; i >= 0; i--) {
      if (n >= a[i]) {
        n -= a[i];
        s.push(a[i]);
      }
    }
    int m = s.size() - 1;
    while (m--) {
      cout << s.top() << " ";
      s.pop();
    }
    cout << s.top() << endl;
  }
}