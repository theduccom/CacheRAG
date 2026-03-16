#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
  string s;
  int page;
  map<string , vector<int> > dict;
  while ( cin >> s >> page )
    {
    dict[ s ].push_back( page );
  }
  for ( map<string, vector<int> >::iterator it = dict.begin(); it != dict.end(); it++ )
    {
      cout << it->first << endl;
      sort( it->second.begin(), it->second.end() );
      int i = 0;
      for ( vector<int>::iterator itv = it->second.begin() ; itv != it->second.end(); itv++, i++ )
	{
	  if(i)cout << " ";
	  cout << *itv;
	}
      cout << endl;
    }
  return 0;
}