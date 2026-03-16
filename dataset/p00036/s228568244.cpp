#include <bits/stdc++.h>
using namespace std;

int main() {
  char str[20][20];
  while(1) {
    for ( int i = 4; i < 12; i++ ){
      for ( int j = 4; j < 12; j++ ) {
      cin >> str[i][j];
      if ( cin.eof() ) return 0;
      }
    }
    char ans;
    for ( int i = 4; i < 12; i++ ) {
      for ( int j = 4; j < 12; j++ ) {
      if ( str[i][j] == '1' && str[i][j+1] == '1' && 
	   str[i+1][j] == '1' && str[i+1][j+1] == '1' ) ans = 'A';
      else if ( str[i][j] == '1' && str[i+1][j] == '1' &&
		str[i+2][j] == '1' && str[i+3][j] =='1' ) ans = 'B';
      else if ( str[i][j] == '1' && str[i][j+1] == '1' &&
		str[i][j+2] == '1' && str[i][j+3] == '1' ) ans = 'C';
      else if ( str[i][j] == '1' && str[i+1][j-1] == '1' &&
		str[i+1][j] == '1' && str[i+2][j-1] == '1' ) ans = 'D';
      else if ( str[i][j] == '1' && str[i][j+1] == '1' &&
		str[i+1][j+1] == '1' && str[i+1][j+2] == '1' ) ans = 'E';
      else if ( str[i][j] == '1' && str[i+1][j] == '1' &&
		str[i+1][j+1] == '1' && str[i+2][j+1] == '1' ) ans = 'F';
      else if ( str[i][j] == '1' && str[i][j+1] == '1' &&
		str[i+1][j-1] == '1' && str[i+1][j] == '1' ) ans = 'G';
							 
      }
    }
    cout << ans << endl;
  }
  return 0;
}