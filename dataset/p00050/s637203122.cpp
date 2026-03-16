#include<iostream>
#include<string>

int main()
{
	std::string s, t1, t2;
	std::getline( std::cin, s );
	t1 = t2 = s;
	
	while( t1.find( "apple" ) != std::string::npos ){
		s.replace( t1.find( "apple" ), 5, "peach" );
		t1.replace( t1.find( "apple" ), 5, "peach" );
	}
	
	while( t2.find( "peach" ) != std::string::npos ){
		s.replace( t2.find( "peach" ), 5, "apple" );
		t2.replace( t2.find( "peach" ), 5, "apple" );
	}
	
	std::cout << s << std::endl;

 	return 0;
}