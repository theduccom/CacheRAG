#include<iostream>

int main(){
	int n;
	while(std::cin >> n, n){
		while(n--){
			int pm, pe, pj;
			std::cin >> pm >> pe >> pj;
			int sum = pm + pe + pj;
			if(pm == 100 || pe == 100 || pj == 100){
				std::cout << "A" << std::endl;
			}else if(pm + pe >= 180){
				std::cout << "A" << std::endl;
			}else if(sum >= 240){
				std::cout << "A" << std::endl;
			}else if(sum >= 210){
				std::cout << "B" << std::endl;
			}else if(sum >= 150 && (pm >= 80 || pe >= 80)){
				std::cout << "B" << std::endl;
			}else{
				std::cout << "C" << std::endl;
			}
		}
	}
}