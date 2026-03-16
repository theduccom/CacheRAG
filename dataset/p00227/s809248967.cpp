#include <iostream>
#include <algorithm>

using namespace std;

int main(void){

  int n,m;
  while( cin >> n >> m , n && m ){

    int ve[1000];
    for( int i = 0 ; i < n ; i++ ){
      cin >> ve[i];    
    }

    sort( ve , ve + n );

    /*  for( int i = 0 ; i < n ; i++ ){
      cout << ve[i] << " ";
    }
    cout << endl;
    */

    int sum = 0;
    int cnt = 1;
    for( int i = n - 1 ; i >= 0 ; i-- ){
      if( cnt == m ){
	cnt = 0;
      }
      else sum += ve[i];
      cnt++;
    }
    
    cout << sum << endl;

  }
  return 0;
}