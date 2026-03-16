#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void){

  int a[3];
  while( cin >> a[0] >> a[1] >> a[2] , ( a[0] || a[1] || a[2] ) ){
    
    int n;
    cin >> n;
    sort( a , a + 3 );
    int R = a[0]*a[0] + a[1]*a[1];

    while(n--){
      int r;
      cin >> r;
      if( 2 * r > sqrt(R) ) cout << "OK" << endl;
      else cout << "NA" << endl;
    }
  }
  return 0;
}