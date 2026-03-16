#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main( void )
{
	string in;
	while ( cin >> in )
	{
		replace( in.begin(), in.end(), ',', ' ' );
		istringstream is( in );
		vector <int> hands(5);
		for ( int i = 0; i < 5; i++ )
		{
			is >> hands[i];
		}

		sort( hands.begin(), hands.end() );

		bool straight = true;
		for ( int i = 0 ; straight && i < 4; i++ )
		{
			if ( i == 0 && hands[0] == 1 && hands[1] == 10 )
				continue;
			if ( hands[i+1] - hands[i] != 1 )
			{
				straight = false;
			}
		}

		if ( straight )
		{
			cout << "straight" << endl;
		}
		else
		{
			vector <int> cnt( 14, 0 );
			for ( int i = 0; i < 5; i++ )
			{
				cnt[ hands[i] ] ++;
			}

			sort( cnt.rbegin(), cnt.rend() );

			if ( cnt[0] == 4 )
			{
				cout << "four card" << endl;
			}
			else if ( cnt[0] == 3 && cnt[1] == 2 )
			{
				cout << "full house" << endl;
			}
			else if ( cnt[0] == 3 )
			{
				cout << "three card" << endl;
			}
			else if ( cnt[0] == 2 && cnt[1] == 2 )
			{
				cout << "two pair" << endl;
			}
			else if ( cnt[0] == 2 )
			{
				cout << "one pair" << endl;
			}
			else
			{
				cout << "null" << endl;
			}

		}

	}
}