#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

  string s;
  while( cin >> s ){

    int t[s.size()];
    for( int i = 0 ; i < s.size() ; i++ ){
      switch( s[i] ){
      case 'I':
	t[i] = 1;
	break;
      case 'V':
	t[i] = 5;
	break;
      case 'X':
	t[i] = 10;
	break;
      case 'L':
	t[i] = 50;
	break;
      case 'C':
	t[i] = 100;
	break;
      case 'D':
	t[i] = 500;
	break;
      case 'M':
	t[i] = 1000;
	break;
      }
    }

    // for( int i = 0 ; i < s.size() ; i++ ){
    //   cout << t[i] << "---" ;
    // }
    

    int sum = 0;
    for( int i = 0 ; i < s.size() ; i++ ){
      if( i + 1 == s.size() )break;
      if( t[i] < t[i+1] ){
	sum = sum + t[i+1] - t[i];
	t[i+1] = t[i] = 0;
	i++;
      }
      else {
	sum += t[i];
	t[i] = 0;
      }
    }
    sum += t[s.size()-1];
    cout << sum << endl;
  }
  return 0;
}