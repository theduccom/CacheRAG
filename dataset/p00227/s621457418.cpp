#include <iostream>
#include <vector>
#include <algorithm>

int main(void){
	int num_veg,bag,price,sum_price;
	std::vector<int> price_veg;
	
	while(std::cin >> num_veg >> bag){
		if(num_veg == 0 && bag == 0) break;
		
		sum_price = 0;
		price_veg.clear();

		for(int i = 0; i < num_veg; ++i){
			std::cin >> price;
			price_veg.push_back(price);
		}

		//sort(greater)
		std::sort(price_veg.begin(), price_veg.end(), std::greater<int>());

		for(int j = 0; j < num_veg; ++j){
			if(j % bag != bag - 1) sum_price += price_veg[j];
		}

		std::cout << sum_price << std::endl;
	}
	return 0;
}