#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main( void )
{
	map < string, vector <int> > index;
	string word;
	int page;
	while ( cin >> word >> page )
	{
		index[word].push_back( page );
	}

	for( map < string, vector <int> >::iterator it = index.begin(); it != index.end(); it++ )
	{
		cout << (*it).first << endl;
		vector <int>& pages = (*it).second;
		sort( pages.begin(), pages.end() );
		for ( vector <int>::iterator it_p = pages.begin(); it_p != pages.end(); it_p++ )
		{
			cout << *it_p;
			if ( it_p+1 != pages.end() )
				cout << " ";
		}
		cout << endl;
	}

	return 0;
}