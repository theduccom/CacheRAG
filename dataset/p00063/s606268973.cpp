#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int i ,cnt=0 ,len;
  string s;
  while( cin >> s ){
    len = s.length();
    len--;
    for( i=0 ; i<len ; i++ ){
      if( s[i] == s[len] ){
	len--;
      }
      else{
	break;
      }
    }
    if( i >= len ){
      cnt++;
    }
  }
  cout << cnt << endl;
}