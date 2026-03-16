#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n, m;
	
	while(std::cin >> n >> m){
		if(n == 0 && m == 0){ break; }
		
		std::vector<int> price(n, 0);
		int sum_price = 0; //全ての値段の合計
		
		for(int i = 0 ; i < n ; ++i){
			std::cin >> price[i];
			sum_price += price[i];
		}
		
		std::sort(price.begin(), price.end(), std::greater<int>());
		
		for(int i = m - 1 ; i < n ; i += m){
			sum_price -= price[i];
		}
		std::cout << sum_price << std::endl;
	}
    return 0;
}