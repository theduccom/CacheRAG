#include<iostream>
#include<vector>
#include<string>

int main()
{
	int n;
	std::string s;
	std::vector<std::string> vec;
	
	std::cin >> n;
	
	for( int i = 0; i < n + 1; i++ ){
		std::getline( std::cin, s );
		if( s.find( "\n" ) == std::string::npos )vec.push_back( s );
	}
	
	for( std::vector<std::string>::iterator it = vec.begin(); it != vec.end(); it++ ){
		while( it->find( "Hoshino" ) != std::string::npos ){
			it->replace( it->find( "Hoshino" ), 7, "Hoshina" );
		}
		if( *it != "" ) std::cout << *it << std::endl;
	}

 	return 0;
}