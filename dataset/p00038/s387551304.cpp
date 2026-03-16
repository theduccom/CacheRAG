#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<string.h>

int a, b, c, d, e;
int cnt[13];

int main()
{
	while( scanf( "%d,%d,%d,%d,%d", &a, &b, &c, &d, &e ) != EOF )
	{
		memset( cnt, 0, sizeof( cnt ) );
		cnt[a-1]++, cnt[b-1]++, cnt[c-1]++, cnt[d-1]++, cnt[e-1]++;

		if( std::find( cnt, cnt + 13, 4 ) != cnt + 13 )
			std::cout << "four card" << std::endl;
		else if( std::find( cnt, cnt + 13, 3 ) != cnt + 13 && std::find( cnt, cnt + 13, 2 ) != cnt + 13 )
			std::cout << "full house" << std::endl;
		else if( std::find( cnt, cnt + 13, 3 ) != cnt + 13 )
			std::cout << "three card" << std::endl;
		else if( std::count( cnt, cnt + 13, 2 ) == 2 )
			std::cout << "two pair" << std::endl;
		else if( std::count( cnt, cnt + 13, 2 ) == 1 )
			std::cout << "one pair" << std::endl;
		else
		{
			bool f = false;

			for( int i = 0; i < 10; i++ )
			{
				if( cnt[i] && cnt[i+1] && cnt[i+2] && cnt[i+3] && cnt[(i+4)%13] )
				{
					std::cout << "straight" << std::endl;
					f = true;
				}
			}
					
			if( !f )
				std::cout << "null" << std::endl;
	 	}
	}

	return 0;
}