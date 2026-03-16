#include<iostream>
using namespace std;

bool isPrime(int n) {
  if ( n == 2 ) return true;
  for(int d = 2; d * d <= n; d++)
    if( n % d == 0 ) return false;
  return true;
}

int main() {
  for(int n; cin >> n; ) {
    int small = n;
    int large = n;
    while( !isPrime(--small) );
    while( !isPrime(++large) );
    cout << small << ' ' << large << endl;
  }
  return 0;
}