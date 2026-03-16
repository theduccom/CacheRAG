#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int i = 0;
  double x,diff,height[100000];
  while(cin >> x) {
    height[i] = x;
    i++;
  }
  sort(height,height+i);
  diff = height[i-1] - height[0];
  cout << diff << endl;
}