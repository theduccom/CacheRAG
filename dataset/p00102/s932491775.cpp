#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main( void )
{
	while (1)
	{
		int n;
		cin >> n;
		if ( n == 0 )
			break;

		vector < vector <int> > T( n+1, vector<int>(n+1, 0) );
		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < n; j++ )
			{
				cin >> T[i][j];
			}
		}

		for ( int i = 0; i < n; i++ )
		{
			for ( int j = 0; j < n; j++ )
			{
				T[i][n] += T[i][j];
				T[n][j] += T[i][j];
			}
		}

		for ( int i = 0; i < n; i++ )
		{
			T[n][n] += T[n][i];
		}

		for ( int i = 0; i <= n; i++ )
		{
			for ( int j = 0; j <= n; j++ )
			{
				cout << setw(5) << T[i][j];
			}
			cout << endl;
		}

	}
	return 0;
}