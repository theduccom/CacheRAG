#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n,m;
	while(std::cin >> n >> m){
		if(n == 0 && m == 0){
			break;
		}
		std::vector<int> vegetable(n,0);
		for(int i = 0; i < n; ++i){
			std::cin >> vegetable[i];
		}
		std::sort(vegetable.begin(), vegetable.end(), std::greater<int>());
		int price = 0;
		for(int i = 0; i < n; ++i){
		  if((i % m) != (m - 1)){
		        price += vegetable.at(i);
		    }
		}
		std::cout << price << std::endl;
	}
	return 0;
}