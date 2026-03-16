#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b,c;
  int cnt1 = 0,cnt2 = 0;
  while ( scanf("%d,%d,%d",&a,&b,&c) != EOF ) {
    if ( a == b ) {
      //      cout << "cnt2" << " " << a << "," << b << "," <<  c << endl;
      cnt2++;
    } else if ( a < c && b < c ) {
      //      cout <<"cnt1" << " "<<  a << "," << b << "," <<  c << endl;
      cnt1++;
    }
    
  }
  cout << cnt1 << endl << cnt2 << endl;
  return 0;
}