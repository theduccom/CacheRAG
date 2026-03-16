// #733568 Solution for 0017: Caesar Cipher by rabbit_TR
//reason I want to see test case.

#include <iostream>
#include <string>
using namespace std;

int main() {

  string input;

  while(true) {
    if ( cin.eof() ) break;

    getline( cin, input );

    char c;
    for ( int i = 0; i < 26; i++ ) {

      string ans = "";
      for ( int j = 0; j < input.size(); j++ ) {

        c = input[j];
        if ( c >= 'a' && c <= 'z' ) {
          c = 'a' + ( c - 'a' + i )%26 ;
        }
        ans += c;

      }

      if ( ans.find( "the", 0 ) == string::npos && ans.find( "this", 0 ) == string::npos && ans.find( "that", 0 ) == string::npos ) continue;

      cout << ans << endl;

      break;

    }

  }

  return 0;

}