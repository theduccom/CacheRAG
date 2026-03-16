#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  vector<double> v1;
  double buf;
  while(cin >> buf) {
	v1.push_back(buf);
  }
  cout << *max_element(v1.begin(), v1.end()) - *min_element(v1.begin(), v1.end()) << endl;
  return 0;
}