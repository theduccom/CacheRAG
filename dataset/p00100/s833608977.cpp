#include<algorithm>
#include<iostream>
#include<vector>
#include<string.h>

int main()
{
	int n;
	long long v[4001];
	std::vector<int> vec;
	
	while( 1 ){
		std::cin >> n;
	
		if( !n ) break;
		
		memset( v, 0, sizeof( v ) );
		vec.clear();
		
		while( n-- ){
			int num;
			long long a, b;
		 	std::cin >> num >> a >> b;
			
			v[num] += a * b;
			vec.push_back( num );
		}
		
		bool f = true;
		bool used[4001];
		
		memset( used, false, sizeof( used ) );
		
		for( std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++ ){
			if( v[*it] >= 1000000 && !used[*it] ){
			 	std::cout << *it << std::endl;
				f = false;
				used[*it] = true;
			}
		}
		
		if( f ){
			std::cout << "NA" << std::endl;
		}
	}

 	return 0;
}