#include<algorithm>
#include<iostream>
#include<vector>

int main()
{
	std::vector<double> v;
	double f;
	
	while( std::cin >> f ){
		v.push_back( f );
	}
	
	std::sort( v.begin(), v.end() );

	std::cout << v[v.size()-1] - v[0] << std::endl;

 	return 0;
}