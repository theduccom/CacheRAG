#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main( void )
{
	while ( !cin.eof() )
	{
		string low;
		getline( cin, low );
		if ( cin.eof() )
			break;

		for ( string::iterator it = low.begin(); it != low.end(); it++ )
		{
			if ( *it >= 'a' && *it <= 'z' )
				*it = toupper( *it );
		}

		cout << low << endl;

	}
}