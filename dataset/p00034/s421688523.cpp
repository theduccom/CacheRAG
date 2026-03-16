#include <bits/stdc++.h>
using namespace std;

int main() {
  int l[11];
  char c;
  while (1) {
    for ( int i = 1; i < 11; i++ ) {
      cin >> l[i] >> c;
      if ( cin.eof() ) return 0;
    }
    int v1,v2;
    cin >> v1 >> c >> v2;

    double sum = 0;
    for ( int i = 1; i < 11; i++ ) {
      sum += l[i];
    }
    double f = 0,b = 0;
    int pos;
    for ( int i = 1; i < 11; i++ ) {
      f += l[i];
      b += l[i]*(1.0*v2/v1);
      if ( f + b >= sum ) {
	pos = i;
	break;
      }
    }
    cout << pos << endl;
  }

  return 0;
}