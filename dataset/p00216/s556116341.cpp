#include <iostream>

using namespace std;

int main(void){

  int w;
  while( cin >> w , 0 <= w ){

    int p = 1150;
    if( 0 <= w && w < 10 ){
      cout << 4280 - p << endl;
    }
    else{
      p = 1150;
      if( 10 <= w ){
	for( int i = 10 ; ( i < w && i < 20 ) ; i++ ){
	  p += 125;
	  //cout << "125" << endl;
	}
	if( 20 <= w ){
	  for( int i = 20 ; ( i < w && i < 30 ) ; i++ ){
	    p += 140;
	    //cout << "140" << endl;
	  }
	}
	if( 30 <= w ){
	  for( int i = 30 ; i < w ; i++ ){
	    p += 160;
	    //cout << "160" << endl;
	  }
	}
      }
      //cout << p << endl;
      cout << 4280 - p << endl;
    }
  }
  return 0;
}