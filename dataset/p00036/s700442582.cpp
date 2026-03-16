#include <iostream>
using namespace std;

int main() {

  int map[14][14] = {0};
  char input;

  while(true) {

    bool flag = false;
    for ( int i = 3; i < 11; i++ ) {

      for ( int j = 3; j < 11; j++ ) {

	cin >> input;
	if ( cin.eof() ) {
	  flag = true;
	  break;
	}
	map[j][i] = input - '0';

      }
      if ( flag ) break;

    }
    if ( flag ) break;

    for ( int i = 3; i < 11; i++ ) {
      for ( int j = 3; j < 11; j++ ) {

	if ( map[j][i] != 0 ) {
	  if ( map[j][i+3] != 0 ) {
	    cout << "B";
	  }else if ( map[j+3][i] != 0 ) {
	    cout << "C";
	  }else if ( map[j-1][i+2] != 0 ) {
	    cout << "D";
	  }else if ( map[j+2][i+1] != 0 ) {
	    cout << "E";
	  }else if ( map[j+1][i+2] != 0 ) {
	    cout << "F";
	  }else if ( map[j-1][i+1] != 0 ) {
	    cout << "G";
	  }else {
	    cout << "A";
	  }
	  cout << endl;
	  flag = true;
	  break;
	}

      }
      if ( flag ) break;
    }

  }

  return 0;

}