#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;

  while( getline( cin, input ) ) {

    for ( int i = 0; i < input.size(); i++ ) {

      if ( input[i] != '@' ) {
	cout << input[i];
      }else {
	for ( int j = 0; j < input[i+1] - '0'; j++ ) {
	  cout << input[i+2];
	}
	i+=2;
      }

    }

    cout << endl;

  }

  return 0;

}