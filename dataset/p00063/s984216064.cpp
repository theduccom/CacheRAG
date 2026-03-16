#include<algorithm>
#include<iostream>
#include<string>

bool ispalindrome( const std::string &s )
{
	return std::equal( s.begin(), s.end(), s.rbegin() );
}

int main()
{
	std::string s;
	int ans = 0;

	while( std::getline( std::cin, s ) )
	{
		if( ispalindrome( s ) )
			ans++;
	}

	std::cout << ans << std::endl;

	return 0;
}