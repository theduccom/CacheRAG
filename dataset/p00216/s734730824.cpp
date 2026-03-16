#include<iostream>
using namespace std;
int main() {
  int n;
  while( cin >> n, n != -1 ) {
    int sum = 1150;
    for(int i=11; i<=n; i++) {
      if( i > 30 ) sum += 160;
      else if( i > 20 ) sum += 140;
      else if( i > 10 ) sum += 125;
    }

    cout << 4280 - sum << endl;
  }
} 