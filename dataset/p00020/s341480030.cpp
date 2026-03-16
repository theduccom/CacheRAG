#include<iostream>
#include<iomanip>
#include<vector>
#include<queue>
#include<list>
#include<stack>
#include<algorithm>
#include<cmath>
#include<memory>
#include<string>

using namespace std;

char cap( char c )
{
  if ( c >= 'a' && c <= 'z' )
    return c - 0x20;
  else if ( c >= 'A' && c <= 'Z' )
    return c + 0x20;
  else
    return c;
}

int main()
{
  string s;
  
  getline( cin, s );

  for ( auto i = 0; i < s.size(); ++i )
    s[i] = cap( s[i] );
  
  cout << s << endl;
  
  return 0;
}