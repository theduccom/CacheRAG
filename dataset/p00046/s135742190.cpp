#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<double> h;
  double i;
  while (cin >> i) {if(i==0)break; h.push_back(i);}
  sort(h.begin(), h.end());
  cout << (h[h.size() - 1] - h[0]) << endl;
  return 0;
}
