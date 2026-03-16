#include <iostream>
#include <algorithm>
using namespace std;

int a, b, c;
int n, r;

int main() {
  while(cin >> a >> b >> c && (a|b|c)) {
    cin >> n;
    int br = min(min(a*a+b*b, b*b+c*c), c*c+a*a);
    while(n--) {
      cin >> r;
      if(r*r*4 > br) {
        cout << "OK" << endl;
      } else {
        cout << "NA" << endl;
      }
    }
  }
  return 0;
}