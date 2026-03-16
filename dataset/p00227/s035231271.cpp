#include<algorithm>
#include<iostream>
#include<vector>

int main()
{
	int n, m;
	while( std::cin >> n >> m, n | m )
	{
		std::vector<int> v( n );
		for( int i = 0; i != n; ++i )
		{
			int p;
			std::cin >> p;
			v.push_back( p );
		}
		
		std::sort( v.rbegin(), v.rend() );

		int ans = 0;
		for( int i = 0; i != n; ++i )
			if( ( i + 1 ) % m )
				ans += v[i];

		std::cout << ans << std::endl;
	}

	return 0;
}