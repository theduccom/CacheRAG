// AOJ 0015
#include<algorithm>
#include<iostream>
#include<string>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int N;
std::string a, b;

int main()
{
	std::cin >> N;
	while( N-- )
	{
		std::cin >> a >> b;
		int asz = a.size(), bsz = b.size(), sz = std::max( asz, bsz );
		if( asz > 80 || bsz > 80 )
		{
			std::cout << "overflow" << std::endl;
			continue;
		}

		std::reverse( a.begin(), a.end() );
		std::reverse( b.begin(), b.end() );

		
		a.resize( 80 );
		b.resize( 80 );

		std::string ans;
		int c = 0;
		rep( i, sz )
		{
			if( i >= asz )
				a[i] = '0';
			if( i >= bsz )
				b[i] = '0';

			int t = int(a[i])+b[i]+c-2*'0';
			c = 0;
			
			if( t >= 10 )
				c = 1, t %= 10;
			ans += char(t+'0');
		}

		if( c )
			ans += '1';

		if( ans.size() > 80 )
			std::cout << "overflow" << std::endl;
		else
		{
			rep( i, ans.size() )
				std::cout << ans[ans.size()-1-i];
			std::cout << std::endl;
		}
	}

	return 0;
}