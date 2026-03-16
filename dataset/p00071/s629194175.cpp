#include <iostream>
#include <string>
using namespace std;

int map[14][14] = {0};

void bomb( int x, int y ) {

  for ( int i = -3; i <= 3; i++ ) {

    if ( map[x+i][y] != 0 ) {
      map[x+i][y] = 0;
      bomb( x+i, y );
    }

    if ( map[x][y+i] != 0 ) {
      map[x][y+i] = 0;
      bomb( x, y+i );
    }

  }

  return;

}

int main() {

  int n;
  cin >> n;

  char input;

  for ( int i = 0; i < n; i++ ) {

    for ( int y = 0; y < 8; y++ ) {

      for ( int x = 0; x < 8; x++ ) {

	cin >> input;
	map[x+3][y+3] = input - '0';

      }

    }

    int x_in,y_in;
    cin >> x_in >> y_in;

    bomb( x_in+2, y_in+2 );

    cout << "Data " << i+1 << ":" << endl;

    for ( int y = 0; y < 8; y++ ) {

      for ( int x = 0; x < 8; x++ ) {

	cout << map[x+3][y+3];

      }
      cout << endl;

    }

  }

  return 0;

}