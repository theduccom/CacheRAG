#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;

  int cnt = 0;

  while( getline( cin, input ) ) {

    bool flag = true;
    for ( int i = 0; i < (input.size()+1)/2; i++ ) {
      if ( input[i] != input[ input.size()-1-i ] ) {
	flag = false;
	break;
      }
    }

    if ( flag ) cnt++;

  }

  cout << cnt << endl;

  return 0;

}