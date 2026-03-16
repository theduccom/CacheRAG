// AOJ 0023
#include<iostream>
#include<cmath>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

const long double EPS = 0;

long double sq(long double x) {
  return x * x;
}

long double abs(long double x) {
  return (x > 0 ? x : -x);
}
/*
bool eq(long double x, long double y) {
  return abs(x - y) < EPS;
}*/

long double dist(long double xa, long double ya, long double xb, long double yb) {
  return sq(xa - xb) + sq(ya - yb);
}

int main() {
  int n;
  cin >> n;
  REP(i, n) {
    long double xa, ya, ra, xb, yb, rb;
    cin >> xa >> ya >> ra >> xb >> yb >> rb;

    long double d = sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
    
    if (ra - rb > d + EPS) {
      cout << 2 << endl;
    } else if (rb - ra > d + EPS) {
      cout << -2 << endl;
    } else if (d > ra + rb + EPS) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
  }
}