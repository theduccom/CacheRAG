#include<iostream>

bool isprime( int n )
{
 	for( int i = 2; i * i <= n; i++ ){
	           if( n % i == 0 ) return false;
	}
	
	return true;
}

int main()
{
	int n;
	while( std::cin >> n ){
		int a = n;
	 	while( !isprime( --a ) );
		std::cout << a << " ";
		a = n;
		while( !isprime( ++a ) );
		std::cout << a << std::endl;
	}
	
 	return 0;
}