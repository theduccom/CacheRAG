#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  string str;
  vector<char>  ch;
  while( cin >> str ){
    ch.clear();
    int len = str.size();
    int i;
    for( i = 0; i < len; i++ ){
      if( str[i] == '@' ){
	int end = str[i+1] -'0';
	for( int j = 0 ; j < end-1; j++ ) ch.push_back(str[i+2]);
	i++;
      }else ch.push_back(str[i]);
    }
    
    int len2 = ch.size();
    for( i = 0; i < len2; i++ ){
      cout << ch[i];
    }
    cout << endl;
  }
  return 0;
}