#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n, m; // n:konyu m:hukuro
	std::cin >> n >> m;
	while(n != 0 || m != 0){
		std::vector<int> price;
		price.resize(n);
		for(int i = 0; i < n; ++i){
			std::cin >> price[i]; // input
		}
		
		std::sort(price.begin(), price.end(), std::greater<int>());

		int sum = 0;
		for(int i = 0; i < n; ++i){
			if((i+1) % m != 0){ sum += price[i];}
		}

		std::cout << sum << std::endl;
		std::cin >> n >> m; 
	}

	return 0;
}