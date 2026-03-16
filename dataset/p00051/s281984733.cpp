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
  int n;
  string s;
  cin >> n;
  
  for ( auto i = 0; i < n; ++i )
    {
      cin >> s;
      string ss(s);
      sort( ss.begin(), ss.end() );
      string rs(ss);
      reverse( rs.begin(), rs.end() );
      cout << stoi( rs ) - stoi( ss ) << endl;
    }
  
  return 0;
}