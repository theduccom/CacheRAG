#include <iostream>
#include <queue>

int main(){
	int m,n;
	
	while(std::cin >> n >> m){
		//n,mがゼロで終了
		if(n == 0 && m == 0){
			break;
		}
		
		int sum_cost = 0;
		std::priority_queue<int> vegetable;
		for(int i = 0; i < n; ++i){
			int cost;
			std::cin >> cost;
			vegetable.push(cost);
		}
		
		for(int i = 1; i <= n; ++i){
			if(i % m){
				sum_cost += vegetable.top();
				vegetable.pop();
			}
			else
				vegetable.pop();
		}
		
		std::cout << sum_cost << std::endl;
	}
	
	return 0;
}
		