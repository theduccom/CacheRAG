#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int n;
  while( cin >> n , n ){

    int ans,M = 0;
    int a,b,c;
    for( int i = 0 ; i < n ; i++ ){
      cin >> a >> b >> c;
      if( b + c > M ){
	ans = a;
	M = b + c;
      }
    }

    cout << ans << " " << M << endl;

  }
  return 0;
}