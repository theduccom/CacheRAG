#include<algorithm>
#include<iostream>
#include<numeric>
#include<stdio.h>

int main()
{
	int n;
	char str[9];
	std::cin >> n;
	while( n-- ){
	 	std::cin >> str;
		
		std::sort( str, str + 8, std::greater<int>() );
		int max = atoi( str );
		std::sort( str, str + 8 );
		int min = atoi( str );
		
		std::cout << max - min << std::endl;
	}

 	return 0;
}