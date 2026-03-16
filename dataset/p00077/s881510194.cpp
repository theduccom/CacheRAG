#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int henkan(string s,int i){

  int S;
  if( s[i+1] == '1' ){
    S = 1;
  }
  else if( s[i+1] == '2'){
    S = 2;
  }
  else if( s[i+1] == '3'){
    S = 3;
  }
  else if( s[i+1] == '4'){
    S = 4;
  }
  else if( s[i+1] == '5'){
    S = 5;
  }
  else if( s[i+1] == '6'){
    S = 6;
  }
  else if( s[i+1] == '7'){
    S = 7;
  }
  else if( s[i+1] == '8'){
    S = 8;
  }
  else if( s[i+1] == '9'){
    S = 9;
  }
  return S;
}


int main(void){

  string s;
  while( cin >> s ){

    for( int i = 0 ; i < s.size() ; i++ ){
      if( s[i] == '@'){
	int S;
	S = henkan(s,i);
	for( int j = 0 ; j < S ; j++ ){
	 cout << s[i+2];
       	}
	i += 2;
      }
      else cout << s[i];
    }
    cout << endl;
  }  
  return 0;
}