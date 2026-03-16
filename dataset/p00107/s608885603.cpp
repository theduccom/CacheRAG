#include<iostream>

int a, b, c;
int n;

int main()
{
	while( std::cin >> a >> b >> c, a | b | c )
	{
		std::cin >> n;

		int mi = std::min( a, std::min( b, c ) );
		int ma = std::max( a, std::max( b, c ) );
		int snd = a + b + c - mi - ma;

		while( n-- )
		{
			int r;
			std::cin >> r;

			if( mi * mi + snd * snd < 4 * r * r )
				std::cout << "OK" << std::endl;
			else
				std::cout << "NA" << std::endl;
		}
	}

	return 0;
}