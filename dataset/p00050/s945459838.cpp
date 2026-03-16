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

int main()
{
  string s;
  getline(cin, s);

  vector<int> ap;
  vector<int> pe;

  int i = 0;
  
  while( true )
    {
      i = s.find( "apple", i );
      if ( i == string::npos ) break;
      ap.push_back( i++ );
    }

  i = 0;
  
  while( true )
    {
      i = s.find( "peach", i );
      if ( i == string::npos ) break;
      pe.push_back( i++ );
    }

  for ( auto it = ap.begin(); it != ap.end(); ++it )
    {
      s.replace( *it, 5, "peach" );
    }
  
  for ( auto it = pe.begin(); it != pe.end(); ++it )
    {
      s.replace( *it, 5, "apple" );
    }

  cout << s << endl;
  
  return 0;
}