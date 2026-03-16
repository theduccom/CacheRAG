#include<iostream>
#include<map>
#include<set>
#include<string>

std::map<std::string, std::set<int> > m;

int main()
{
	std::string s;
	int p;
	while( std::cin >> s >> p )
		m[s].insert( p );

	for( std::map<std::string, std::set<int> >::iterator it = m.begin(); it != m.end(); ++it )
	{
		std::cout << it->first << std::endl;

		std::set<int>& s = it->second;

		for( std::set<int>::iterator it2 = s.begin(); it2 != s.end(); ++it2 )
			( it2 == s.begin() ? std::cout : std::cout << " " ) << *it2;
	
		std::cout << std::endl;
	}

	return 0;
}