#include <iostream>
#include <queue>

int main(){
	int n,m;
	while(std::cin >> n >> m){
		if(n == 0 && m == 0){
			break;
		}
		std::priority_queue<int> que;
		int vegetable;
		for(int i = 0; i < n; ++i){
			std::cin >> vegetable;
			que.push(vegetable);
		}
		int price = 0;
		for(int i = 0; i < n; ++i){
		    if((i % m) != (m - 1)){
	  	        price += que.top();
		    }
		    que.pop();
		}
		std::cout << price << std::endl;
	}
	return 0;
}