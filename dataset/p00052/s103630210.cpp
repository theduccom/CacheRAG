#include<iostream>

int main()
{
	int n;
	while( 1 ){
		std::cin >> n;
		if( !n ) break;
		
		int ans = 0;
		while( n >= 5 ){
			ans += n / 5;
			n /= 5;
		}
		
		std::cout << ans << std::endl;
	}
	

 	return 0;	
}