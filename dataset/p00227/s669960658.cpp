#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

int main(){

	int num, limit;

	while(std::cin >> num >> limit){
		if(num == 0 && limit == 0)
			break;

		std::vector<int> price;
		int sum_price = 0;
		//input
		for(int i = 0; i < num; ++i){
			int buf;
			std::cin >> buf;
			sum_price += buf;
			price.push_back(buf);
		}
		//sort
		std::sort(price.begin(),price.end(),std::greater<int>());
		//discount
		int discount = 0;
		int in_bag = 0;
		for(auto itr = price.begin(); itr != price.end(); ++itr){
			++in_bag;
			if(in_bag == limit){
				discount += *itr;
				in_bag = 0;
			}
		}

		std::cout << sum_price - discount << std::endl;
	}
	return 0;
}
	