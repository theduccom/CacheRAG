#include <iostream>
#include <cmath>
using namespace std;

int factorial(int x) {
  int ans=0,point = 2,i=1;
  double p;
  while(point > 1) {
    p = x / pow(5.0,i);
    i++;
    point = (int)floor(p);
    ans += point;
  }
  return ans;
}

int main() {
  int a;
  while(cin >> a,a) {
     cout << factorial(a) << endl;
     // factorial(a);
  }
}