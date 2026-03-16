#include <iostream>
using namespace std;

int main() {
  int n;
  while(cin >> n, n) {
    int ap, ad = 0;
    for(int i = 0; i < n; i++) {
      int p, d1, d2;
      cin >> p >> d1 >> d2;
      if(d1+d2 > ad) {
	ap = p;
	ad = d1+d2;
      }
    }
    cout << ap << ' ' << ad << endl;
  }
}