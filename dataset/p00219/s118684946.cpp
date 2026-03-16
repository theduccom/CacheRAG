#include <iostream>
#include <cstdio>
#include <algorithm>
#include <array>
#include <vector>

using namespace std;

int main() {

  while ( true ) {
	int n;
	cin >> n;
	if ( n == 0 ) break;

	array<int, 10> hist;
	hist.fill( 0 );
	for ( int i = 0; i < n; i++ ) {
	  int elem;
	  cin >> elem;
	  hist[ elem ]++;
	}
	for ( const int num : hist ) {
	  if ( num > 0 ) {
		for ( int i = 0; i < num; i++ ) {
		  cout << "*";
		}
		cout << endl;
	  } else {
		cout << "-" << endl;
	  }			   
	}
  }  
}