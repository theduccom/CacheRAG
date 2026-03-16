#include<iostream>
#include<string>
#include<cstring>

int main()
{
	int n;
	while( std::cin >> n, n )
	{
		int cnt[10];
		memset( cnt, 0, sizeof( cnt ) );

		for( int i = 0; i != n; ++i )
		{
			int a;
			std::cin >> a;
			++cnt[a];
		}

		for( int i = 0; i <= 9; ++i )
			std::cout << ( cnt[i] ? std::string( cnt[i], '*' ) : "-" ) << std::endl;
	}

	return 0;
}