#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main() {
  while( true ) {
	int n;
	cin >> n;
	if ( n == 0 ) break;
	int mp = -1, md = -1;
	for ( int i = 0; i < n; i++ ) {
	  int p, d1, d2;
	  cin >> p >> d1 >> d2;
	  if ( d1 + d2 > md ) {
		mp = p;
		md = d1 + d2;		
	  }
	}
	cout << mp << " " << md << endl;
  }
}