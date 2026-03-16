#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int v2( int n ) {
  if ( n <= 10 ) {
	return 140 * n;
  } else {
	return 1400 + 160 * ( n - 10 );
  }
}

int v1( int n ) {
  if ( n <= 10 ) {
	return 125 * n;
  } else {
	return 1250 + v2( n - 10 );
  }
}

int solve( int n ) {
  if ( n <= 10 ) {
	return 1150;
  } else {
	return 1150 + v1( n - 10 );
  }
}

int main() {
  while( true ) {
	int n;
	cin >> n;
	if ( n == -1 ) break;
	cout << 4280 - solve( n ) << endl;
  }  
}