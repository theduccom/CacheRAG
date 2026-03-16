#include <iostream>
#include <string>
using namespace std;

int main() {

  string in;

  while( cin >> in ) {

    long long int ans = 0;
    long long int b = 0;
    long long int a;
    for( long long int i = 0; i < in.size(); i++ ) {
      if ( in[i] == 'I' ) {
	a = 1;
      }else if ( in[i] == 'V' ) {
	a = 5;
      }else if ( in[i] == 'X' ) {
	a = 10;
      }else if ( in[i] == 'L' ) {
	a = 50;
      }else if ( in[i] == 'C' ) {
	a = 100;
      }else if ( in[i] == 'D' ) {
	a = 500;
      }else if ( in[i] == 'M' ) {
	a = 1000;
      }
      if ( b == 0 ) {
	b = a;
      }else {
	if ( b < a ) {
	  ans -= b;
	  ans += a;
	  b = 0;
	}else {
	  ans += b;
	  b = a;
	}
      }
    }
    ans += b;
    cout << ans << endl;

  }

  return 0;

}