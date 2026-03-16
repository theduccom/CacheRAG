#include <iostream>
#include <string>
using namespace std;
int main( void )
{
	string input;
	while ( cin >> input )
	{
		bool at = false;
		for ( string::iterator it = input.begin(); it != input.end(); it++ )
		{
			if ( *it == '@' )
			{
				at = true;
			}
			else if( at )
			{
				int n = (int)((*it)-'0');
				it++;
				while( n-- )
				{
					cout << *it;
				}
				at = false;
			}
			else
			{
				cout << *it;
			}
		}
		cout << endl;
	}
	return 0;
}