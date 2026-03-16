#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  map< string, vector<int> > dict;
  while( 1 ) {
    string word;
    int page;
    if( !( cin >> word ) ){ break; }
    cin >> page;
    if( dict.find( word ) == dict.end() ) {
      pair< string, vector<int> > p;
      p.first = word;
      p.second.push_back( page );
      dict.insert( p );
    } else {
      dict[ word ].push_back( page );
    }
  }

  for(
      map< string, vector<int> >::iterator it = dict.begin();
      it != dict.end();
      it++
  ) {
    cout << it->first << endl;
    sort( it->second.begin(), it->second.end() );
    int len = it->second.size();
    for( int i = 0; i < len; i++ ) {
      cout << it->second[ i ] << flush;
      if( i != len - 1 ) { 
        cout << " " << flush;
      }
    }
    cout << endl;
  }

  return EXIT_SUCCESS;
}