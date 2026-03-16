#include<algorithm>
#include<iostream>

int main()
{
	int n;
	while( std::cin >> n, n )
	{
		int id, d = 0;

		for( int i = 0; i != n; ++i )
		{
			int p, d1, d2;
			std::cin >> p >> d1 >> d2;
		
			if( d1 + d2 > d )
			{
				d = d1 + d2;
				id = p;
			}
		}

		std::cout << id << ' ' << d << std::endl;
	}

	return 0;
}