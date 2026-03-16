#include<iostream>
#include<string>

int ans;

int getNum( char ch )
{
	switch( ch )
	{
		case 'I':
			return 1;
		case 'V':
			return 5;
		case 'X':
			return 10;
		case 'L':
			return 50;
		case 'C':
			return 100;
		case 'D':
			return 500;
		case 'M':
			return 1000;
	}
}

int main()
{
	std::string str;
	while( std::cin >> str )
	{
		ans = 0;

		for( int i = 0; i < str.size(); i++ )
		{
			if( i == str.size() - 1 )
			{
				ans += getNum( str[i] );
				break;
			}

			int a = getNum( str[i] ), b = getNum( str[i+1] );
		
			if( a < b )
				ans -= a;
			else
				ans += a;
		}

		std::cout << ans << std::endl;
	}

	return 0;
}