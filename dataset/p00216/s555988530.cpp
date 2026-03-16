#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int w;
  int prevcost = 4280, cost;
  while( 1 ) {
    cin >> w;
    if( w == -1 ) { break; }
    if( w <= 10 ) {
      cost = 1150;
    } else if( w <= 20 ) {
      cost = 1150 + 125 * ( w - 10 );
    } else if( w <= 30 ) {
      cost = 1150 + 1250 + 140 * ( w - 20 );
    } else {
      cost = 1150 + 1250 + 1400 + 160 * ( w - 30 ) ;
    }
    cout << ( prevcost - cost ) << endl;
  }

  return EXIT_SUCCESS;
}