#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int R_range(int d, int w, int h) {
  int a, b, r;
  priority_queue<int> Q;
  Q.push(d); Q.push(w); Q.push(h); Q.pop();
  a = Q.top(); Q.pop();
  b = Q.top();
  r = a * a + b * b ;
  return r / 4;
}

int main() {
  int n, d, w, h, r, R;
  while( cin >> d >> w >> h ) {
    if (d == 0)  return 0;
    R = R_range(d, w, h);
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> r;
      if ( R < (r * r) ) { cout << "OK" << endl; }
      else { cout << "NA" << endl; }
    }
  }
}
