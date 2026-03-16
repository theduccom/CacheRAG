#include <iostream>
using namespace std;

int main() {

  long long int n;

  while(true) {

    cin >> n;
    if ( n == 0 ) break;

    long long int cnt = 0;

    for ( long long int i = 5; i <= n; i*=5 ) {
      cnt += n/i;
    }

    cout << cnt << endl;

  }

  return 0;

}