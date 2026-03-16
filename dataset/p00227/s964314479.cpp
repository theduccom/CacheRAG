#include <iostream>
#include <vector>
#include <algorithm>


int main(){
	std::vector<int> vegetable; //dataset
	int n; //number of purchase
	int m; //capacity of bag

	while(std::cin >> n >> m){ //input dataset
		if(n == 0 && m == 0) //end of input
			break;

		std::vector<int> price; //price of vegetable
		for(int i = 0; i < n; ++i){ //input price
			int data;
			std::cin >> data;
			price.push_back(data);
		}

		
		std::sort(price.begin(), price.end(), std::greater<int>()); //sort price in descending order


		for(int i = 0; i < n; ++i){
			vegetable.push_back(price[i]);
		}

		int ans = 0; //minimum cost
		int count = 1; //counter
		while(!vegetable.empty()){
			if(count % m == 0){
				vegetable.erase(vegetable.begin());
				++count;
			} else if(count % m != 0){
				ans += (int)vegetable.front();
				vegetable.erase(vegetable.begin());
				++count;
			}
		}
		std::cout << ans << std::endl; //output answer
		
	}


	return 0;
}