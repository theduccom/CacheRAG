#include <iostream>
#include <vector>
#include <algorithm>

int main(){
	int n,m;
	int p;
	
	while(true){
		std::cin >> n >> m;
		if(n == 0 && m == 0){
			break;
		}
		
		std::vector<int> price;
		for(int i=0; i<n ;++i){
			std::cin >> p;
			price.push_back(p);
		}
		//sort in descending order
		std::sort(price.begin(), price.end(), std::greater<int>());
		
		int i=1; //counter
		int sum=0;
		for(int x : price){
			if(i%m != 0){
				sum += x;
			}
			++i;
		}
		//output
		std::cout << sum << std::endl;
	}
}