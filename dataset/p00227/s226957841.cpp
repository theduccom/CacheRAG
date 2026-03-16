#include <iostream>
#include <vector>
#include <algorithm>


int main(){
	int k=0,n,m; //n:buy count  m: count
	std::vector<int> cheap;
	
	while(std::cin >> n >> m){
		if(n == 0 && m == 0)
			break;
		
		std::vector<int> p;
		p.resize(n);
		for(int i=0; i<n; ++i){
			std::cin >> p[i];
		}
		
		std::sort(p.begin(), p.end(), std::greater<int>());

		int sum=0;
		for(int i=0; i<n; ++i){
			if((i+1)%m != 0)
				sum += p[i];
		}
		cheap.push_back(sum);
		++k;
	}
	
	for(int i=0; i<k; ++i){
		std::cout << cheap[i] << std::endl;
	}
	
	return 0;
}