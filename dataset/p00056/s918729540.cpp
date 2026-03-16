#include <iostream>
#include <vector>
using namespace std;

int main() {

  vector<int> list;

  bool sosu[50000] = {false};
  for ( long long int i = 2; i < 50000; i++ ) {
    if ( sosu[i] == false ) {
      list.push_back(i);
      for ( long long int j = i*2; j < 50000; j+=i ) {
	sosu[j] = true;
      }
    }
  }

  int n;

  while(true) {

    cin >> n;
    if ( n == 0 ) break;

    int cnt = 0;

    for ( int i = list.size()-1; i >= 0; i-- ) {

      int k = n - list[i];
      if ( k < 2 ) continue;

      int x = 0;
      int y = i;
      while(true) {

	int z = ( x+y )/2;

	if ( k == list[z] ) {
	  cnt++;
	  break;
	}else if ( k < list[z] ) {
	  if ( y == z ) {
	    if ( x == y ) break;
	    y = x;
	  }else {
	    y = z;
	  }
	}else {
	  if ( x == z ) {
	    if ( x == y ) break;
	    x = y;
	  }else {
	    x = z;
	  }
	}

      }

    }

    cout << cnt << endl;

  }

  return 0;

}