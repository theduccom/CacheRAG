#include<algorithm>
#include<iostream>
#include<vector>

typedef std::pair<int, int> P;

std::vector<P> ps( 10000 );

int main()
{
	int n;
	while( std::cin >> n, n )
	{
		ps.clear();

		for( int i = 0; i != n; ++i )
		{
			int p, d1, d2;
			std::cin >> p >> d1 >> d2;
			ps.push_back( std::make_pair( d1 + d2, p ) );
		}

		std::sort( ps.rbegin(), ps.rend() );

		std::cout << ps[0].second << ' ' << ps[0].first << std::endl;
	}

	return 0;
}