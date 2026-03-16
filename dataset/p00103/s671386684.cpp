#include <iostream>
#include <string>
using namespace std;

int main( void )
{
	int n;
	while ( cin >> n )
	{
		for ( int i = 0; i < n ; i++ )
		{
			int cnt = 0;
			int point = 0;
			int runner = 0;
			int out = 0;
			while ( out < 3 && cnt < 100 )
			{
				cnt ++;
				string in;
				cin >> in;

				if ( in == "HIT" )
				{
					if ( runner == 3 )
						point ++;
					else
						runner++;
				}
				else if ( in == "HOMERUN" )
				{
					point += runner + 1;
					runner = 0;
				}
				else if ( in == "OUT" )
				{
					out ++;
				}
			}

			cout << point << endl;
		}
	}

	return 0;
}