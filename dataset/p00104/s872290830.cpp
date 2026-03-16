#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  while(1) {

    long long int w, h;
    cin >> w >> h;

    if ( w == 0 ) break;

    vector< string > m;

    for ( long long int i = 0; i < w; i++ ) {

      string in;
      cin >> in;
      m.push_back( in );

    }

    bool f[101][101] = {};

    long long int x = 0;
    long long int y = 0;

    for (;;) {

      if ( m[y][x] == '.' ) {
	cout << x << " " << y << endl;
	break;
      }else if ( m[y][x] == '>' ) {
	x++;
      }else if ( m[y][x] == '<' ) {
	x--;
      }else if ( m[y][x] == '^' ) {
	y--;
      }else if ( m[y][x] == 'v' ) {
	y++;
      }
      if ( f[y][x] == true ) {
	cout << "LOOP" << endl;
	break;
      }
      f[y][x] = true;

    }

  }

  return 0;

}