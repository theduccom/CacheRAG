#include <iostream>
#include <string>
using namespace std;

int main(){
  string s;

  while( getline( cin,s ) ){
    for( int i=0;i<26;i++ ){
      for( unsigned int j=0;j<s.length();j++ ){
	if( s[j]<'a' || s[j]>'z' ) continue;
	if( ++s[j]>'z' ) s[j] = 'a';
      }
      
      //    cout << "in loop : " << s << endl;
      int s1 = s.find("the");
      int s2 = s.find("this");
      int s3 = s.find("that");
      //    cout << s1 << "," << s2 << "," << s3 << endl;
      
      if( s1>=0 || s2>=0 || s3>=0 )
	break;
    }
    cout << s << endl;
  }

  return 0;
}