#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

#define PMAX 10000

int main() {
  bool p[PMAX+1];
  int n, t;
  vector<int> twin;
  vector<int>::iterator it;
  for (int i=0; i<=PMAX; i++) p[i] = true;
  for (int i=2; i*i<=PMAX; i++) {
    for (int j=2*i; j<=PMAX; j+=i) {
      p[j] = false;
    }
  }
  for (int i=2; i<=PMAX; i++) {
    if (p[i] && p[i+2]) {
      twin.push_back(i+2);
    }
  }

  while (1) {
    cin >> n;
    if (!n) break;
    it = upper_bound(twin.begin(), twin.end(), n);
    --it;
    cout << (*it)-2 << " " << *it << endl;
  }

  return 0;
}