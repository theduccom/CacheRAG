// AOJ 0216
#include<iostream>

int w;
const int ps[3] = { 125, 140, 160 };

int main()
{
	while( std::cin >> w, w != -1 )
	{
		int ans = 1150;
	
		for( int i = 0; i != 3; ++i )
		{
			const int border = ( i + 1 ) * 10;
			
			if( w >= border )
				ans += ps[i] * ( i == 2 ? w - border : std::min( w - border, 10 ) ); 
		}

		std::cout << 4280 - ans << std::endl;
	}

	return 0;
}