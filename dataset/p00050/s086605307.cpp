#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  while( getline( cin , s ) ){

    for( int i = 0 ; i < s.size() ; i++ ){
      if( i > s.size() - 5 )break;
      if( s.substr( i , 5 ) == "apple" ){//　substrはstring s の　i番目から5文字の文字列を返す関数
	s.replace( i , 5 , "peach" );//replaceはstring s の i番目から5文字を置換する関数
      }
      else if( s.substr( i , 5 ) == "peach" ){
	s.replace( i , 5 , "apple" );
      }

    }
    cout << s << endl;
  }
  return 0;
}