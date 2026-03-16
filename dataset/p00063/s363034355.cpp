#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main( void )
{
	int kotae = 0;
	string in;
	while ( cin >> in )
	{
		string l, r;
		int len = in.size()/2;
		for ( int i = 0; i < len; i++ )
		{
			l += in[i];
		}
		int c = (in.size()%2)?1:0;
		for ( int i = len+c; i < in.size(); i++ )
		{
			r += in[i];
		}

		reverse( r.begin(), r.end() );
		if ( r == l ) kotae++;
	}
	
	cout << kotae << endl;

	return 0;
}