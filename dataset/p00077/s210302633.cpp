#include<iostream>
#include<string>

int main()
{
	std::string s;
	while( std::cin >> s )
	{
		std::string::size_type i;
		for( i = 0; i < s.size(); ++i )
		{
			if( s[i] != '@' )
				std::cout << s[i];
			else
			{
				++i;
				int rep = s[i] - '0';
				++i;
				for( int j = 0; j != rep; ++j )
					std::cout << s[i];
			}
		}

		std::cout << std::endl;
	}

	return 0;
}