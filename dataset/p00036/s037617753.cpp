#include <iostream>
#include <string>

using namespace std;

string s[8];

int check( int i , int j ){

  if( i + 1 < 8 && j + 1 < 8 ){
    if( s[i][j+1] == '1' && s[i+1][j+1] == '1' && s[i+1][j] == '1' ){
      return 1;
    }
  }
  if( i + 3 < 8 ){
    if( s[i+1][j] == '1' && s[i+2][j] == '1' && s[i+3][j] == '1' ){
      return 2;
    }
  }
  if( j + 3 < 8 ){
    if( s[i][j+1] == '1' && s[i][j+2] == '1' && s[i][j+3] == '1' ){
      return 3;
    }
  }
 if( j - 1 >= 0 && i + 2 < 8 ){
    if( s[i+1][j] == '1' && s[i+1][j-1] == '1' && s[i+2][j-1] == '1' ){
      return 4;
    }
  }
 if( j + 2 < 8 && i + 1 < 8 ){
    if( s[i][j+1] == '1' && s[i+1][j+1] == '1' && s[i+1][j+2] == '1' ){
      return 5;
    }
  }
  if( j + 1 < 8 && i + 2 < 8 ){
    if( s[i+1][j] == '1' && s[i+1][j+1] == '1' && s[i+2][j+1] == '1' ){
      return 6;
    }
  }
  return 7;
}

int main(void){
  
  while( cin >> s[0] ){

    for( int i = 1 ; i < 8 ; i++ ){
	cin >> s[i];
    }

    for( int i = 0 ; i < 8 ; i++ ){
      for( int j = 0 ; j < 8 ; j++ ){
	if( s[i][j] == '1' ){
	  //  cout << i << j << "---" <<  endl;
	  switch( check( i , j ) ){
	  case 1:
	    cout << "A" << endl;
	    break;
	  case 2:
	    cout << "B" << endl;
	    break;
	  case 3:
	    cout << "C" << endl;
	    break;
	  case 4:
	    cout << "D" << endl;
	    break;
	  case 5:
	    cout << "E" << endl;
	    break;
	  case 6:
	    cout << "F" << endl;
	    break;
	  case 7:
	    cout << "G" << endl;
	    break;
	  }
	  goto end;
	}
      }
    }
   end:;
  }
  return 0;
}