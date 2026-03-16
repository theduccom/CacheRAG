#include<bits/stdc++.h>
using namespace std;

int main()
{
  int d[3];
  while( cin >> d[0] >> d[1] >> d[2], d[0]+d[1]+d[2] ) {
    int n;
    cin >> n;
    sort(d, d+3);

    while( n-- ) {
      int r;
      cin >> r;
      if( sqrt(d[0]*d[0] + d[1]*d[1]) < 2*r ) cout << "OK" << endl;
      else cout << "NA" << endl;
    }

  }

}