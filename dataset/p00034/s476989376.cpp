#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;

const int N = 11;

int main() {
  string s;
  while(cin >> s) {
    double d[N];
    double v1, v2;
    replace(s.begin(), s.end(), ',', ' ');
    stringstream ss(s);
    d[0] = 0;
    for(int i = 1; i < N; ++i) {
      ss >> d[i];
      d[i] += d[i-1];
    }
    ss >> v1 >> v2;
    double x = v1/(v1+v2)*d[N-1];
    cout << (lower_bound(d,d+N,x)-d) << endl;
  }
  return 0;
}