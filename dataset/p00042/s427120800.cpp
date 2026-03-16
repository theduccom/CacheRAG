#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <algorithm>
#include <bitset>
using namespace std;

class info
{
public:
	int value;
	vector <bool> visited;

	info()
	{
		value = 0;
	}
};

int main( void )
{
	int case_no = 1;
	int w_max;
	while ( cin >> w_max && w_max )
	{

		// Â
		int n;
		cin >> n;

		// îñ
		vector <int> v( n );
		vector <int> w( n );

		// üÍ
		for ( int i = 0; i < n; i++ )
		{
			string in;
			cin >> in;
			replace( in.begin(), in.end(), ',', ' ' );

			int vi, wi;
			istringstream is( in );
			is >> vi >> wi;

			v[i] = vi;
			w[i] = wi;
		}

		// sort
		for ( int i = 0; i < n-1; i++ )
		{
			for ( int j = i+1; j < n; j++ )
			{
				if ( w[i] > w[j] )
				{
					swap( w[i], w[j] );
					swap( v[i], v[j] );
				}
				else if ( w[i] == w[j] )
				{
					if ( v[i] < v[j] )
					{
						swap( v[i], v[j] );
					}
				}
			}
		}

		vector <info> dp( w_max + 1 );

		for ( int i = 0; i < n; i++ )
		{
			int& wi = w[i];
			int& vi = v[i];

			if ( dp[wi].value < vi )
			{
				dp[wi].value = vi;
				dp[wi].visited = vector <bool>( n );
				dp[wi].visited[i] = true;
			}
		}

		for ( int i = 0; i <= w_max; i++ )
		{
			if ( dp[i].value > 0 )
			{
				for ( int j = 0; j < n; j++ )
				{
					int& wj = w[j];
					int& vj = v[j];
					if ( i + wj > w_max )
						continue;

					if ( dp[i].visited[j] )
						continue;

					if ( dp[i].value + vj > dp[i+wj].value )
					{
						dp[i+wj].value = dp[i].value + vj;
						dp[i+wj].visited = dp[i].visited;
						dp[i+wj].visited[j] = true;
					}
				}
			}
		}

		int maxw = 0;
		int maxv = 0;
		for ( int i = 0; i <= w_max; i++ )
		{
			if ( dp[i].value <= 0 )
				continue;

			if ( maxv < dp[i].value )
			{
				maxw = i;
				maxv = dp[i].value;
			}
		}

		cout << "Case " << case_no << ":" << endl;
		cout << maxv << endl;
		cout << maxw << endl;

		case_no ++;
	}

	return 0;
}