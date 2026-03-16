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
	
	while( 1 ){
		std::cin >> n;
		if( !n ) break;
		
		int i = 2, p = 0, s = 0;
		while( p < n ){
			if( isprime( i ) ){
				s += i;
				p++;
			}
			i++;	
		}
	
		std::cout << s << std::endl;
	}

 	return 0;
}