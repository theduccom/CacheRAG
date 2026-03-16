#include <iostream>
using namespace std;

int main() {

  int n;
  cin >> n;

  for ( int i = 0; i < n; i++ ) {

    int cnt[10] = {0};

    char c;
    for ( int j = 0; j < 8; j++ ) {
      cin >> c;
      cnt[c-'0']++;
    }

    int x = 0;
    int y = 0;
    int z = 1;

    for ( int j = 0; j < 10; j++ ) {

      if ( cnt[j] != 0 ) {

	cnt[j]--;
	x += j*z;
	y += j*(10000000/z);
	j--;
	z*=10;
	continue;

      }

    }

    cout << x - y << endl;

  }

  return 0;

}