#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int purchase, capa;
	std::cin >> purchase >> capa; //input
	
	while(purchase > 0 && capa > 0){
		std::vector<int> vegetable_price;
		vegetable_price.resize(purchase);
		
		//input
		for(int i=0; i<purchase; ++i){
			std::cin >> vegetable_price[i];
		}
		
		std::sort(vegetable_price.begin(), vegetable_price.end(), std::greater<int>());
		
		// 
		for(size_t i=capa-1; i<vegetable_price.size(); i += capa-1){
			vegetable_price.erase(vegetable_price.begin() + i);
		}
		
		int sum_price = 0;
		for(size_t i=0; i<vegetable_price.size(); ++i){
			sum_price += vegetable_price[i];
		}
		
		//show
		std::cout << sum_price << std::endl;
		
		//input
		std::cin >> purchase >> capa;
	}
	
	return 0;
}