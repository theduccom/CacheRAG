#include <iostream>
#include <string>
using namespace std;

int main() {

  string in;

  while( cin >> in ) {

    for ( long long int i = 0; i < in.size(); i++ ) {

      if ( in[i] == '@' ) {
	i++;
	for ( long long int j = 0; j < in[i] - '0'; j++ ) {
	  cout << in[i+1];
	}
	i++;
      }else {
	cout << in[i];
      }

    }

    cout << endl;

  }

  return 0;

}